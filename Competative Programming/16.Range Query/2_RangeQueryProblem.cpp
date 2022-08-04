/// problem linke ----- https://www.hackerearth.com/practice/data-structures/advanced-data-structures/segment-trees/practice-problems/algorithm/range-minimum-query/



#include<bits/stdc++.h>
using namespace std;
// bulding of segment tree
void buildSegmentTree(int arr[], int seg[], int low, int high, int ind){
      
      if(low == high) {
            seg[ind] = arr[low]; 
            return;
      }
      
      int mid = (low + high)/2;
      
      buildSegmentTree(arr,seg,low,mid,2*ind+1);
      buildSegmentTree(arr,seg,mid+1,high,2*ind+2);
      
      seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
      //return seg[ind];
}
/// query for segment treee
int query(int seg[],int low, int high,int l,int r,int ind){
      
      
      // no overlap
      if(l > high or r < low) return INT_MAX;
      
      // complete overlap
      if(low >= l and high <= r) return seg[ind];
      
      // partial overlap
      else{
            int mid = (low + high)/2;
            
            int left = query(seg,low,mid,l,r,2*ind+1);
            int right = query(seg,mid+1,high,l,r,2*ind+2);
            
            return min(left,right);  
      }
}

void update(int ind,int seg[],int low,int high,int i,int val){
      if(low == high){
            seg[ind] = val;
            return;
      }
      
      int mid = (low + high)/2;
      
      
      if(i <= mid)update(2*ind+1,seg,low,mid,i,val);
      else update(2*ind+2,seg,mid+1,high,i,val);
      
      seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
      
}


void solve(){
      int n,q;
      cin>>n>>q;
      int arr[n];
      
      for(int i=0; i<n; i++) cin>>arr[i];
      
      int seg[4*n];
      
      buildSegmentTree(arr,seg,0,n-1,0);
      
      while(q--){
            
            char type;
            cin>>type;
            
            if(type == 'q'){
                  int l,r;
                  cin>>l>>r;
                  cout<<query(seg,0,n-1,l-1,r-1,0)<<endl;
            }
            else{
                
                  int ind,val;
                  cin>>ind>>val;
                  update(0,seg,0,n-1,ind-1,val);
                  arr[ind] = val;
            }
      }
      
}
int main(){
      solve();
      
      return 0;
}

