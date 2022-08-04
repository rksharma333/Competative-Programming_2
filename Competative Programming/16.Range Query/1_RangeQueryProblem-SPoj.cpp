#include<bits/stdc++.h>
using namespace std;
// bulding of segment tree
int buildSegmentTree(int arr[], int seg[], int low, int high, int ind){
      
      if(low == high) {
            seg[ind] = arr[low]; 
            return seg[ind];
      }
      
      int mid = (low + high)/2;
      
      int left = buildSegmentTree(arr,seg,low,mid,2*ind+1);
      int right = buildSegmentTree(arr,seg,mid+1,high,2*ind+2);
      
      seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
      return seg[ind];
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


void solve(){
      int n;
      cin>>n;
      int arr[n];
      
      for(int i=0; i<n; i++) cin>>arr[i];
      
      int seg[4*n];
      
      buildSegmentTree(arr,seg,0,n-1,0);
      
      int q;
      cin>>q;
      
      while(q--){
            int l,r;
            cin>>l>>r;
            
            cout<<query(seg,0,n-1,l,r,0)<<endl;
      }
      
}
int main(){
      solve();
      
      return 0;
}

