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

void solve()
{
      int n;
      cin>>n;
      vi a(n);
      int sum = 0;
      int mx = 0;
      bool flag = true, flag1 = true;
      int cnt1 = 0;
      FOR(i,n){
            cin>>a[i];
            sum += a[i];
            if(sum < 0){
                  flag = false;
            }
            if(sum == 0 && a[i] != 0) cnt1++;
            mx = max(a[i],mx);
      }
      if(sum==0 && mx ==0) ys
      else if(sum==0 && flag && cnt1 == 1) ys
      else no
      
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