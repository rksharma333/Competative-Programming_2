#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define ff first 
#define ss second
#define endl "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define pr(x) cout << x << endl;
#define _pr(x) cout << x << " ";
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;

/////////////////////////////**********************************************/////////////////////////////
void sort_i(vi &a)
{
    sort(a.begin(), a.end());
}
void sort_d(vi &a)
{
    sort(a.begin(), a.end(), greater<int>());
}


///////////////////////////////*********************************//////////////////////////////////////////
void print(vector<pair<int,int>> &p1,int i,int n){
         int sum = 0;
         while(sum != n){
            cout<<p1[i].ff<<p1[i].ss;
            sum += (p1[i].ff + p1[i].ss);
         }
}
void solve()
{
      int n;
      cin>>n;
     vector<pair<int,int>> p1;
     p1.pb({1,2});
     p1.pb({2,1});
     if(n <= 2) cout<<n<<endl;
     else if(n%3==0 || n%3 == 2){
        print(p1,1,n-(n%3));
        if(n%3 != 0) cout<<n%3;
        cout<<endl;
        
     }else{
      print(p1,0,n-1);
      cout<<n%3<<endl;
     }
     
}
//////////////////////////////////////////////*****************************///////////////////////////////////////////
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/////////////////////////////////// This Code is written by R.K. Sharma ////////////////////////////////////////////////////////