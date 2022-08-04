#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define pr(x) cout<<x<<endl;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    int ans = INT_MAX,j=k, cnt1 = 0;
    vi dp(n,0);
    for(int i=0; i<k; i++) 
    {
        if(s[i] != 'B') cnt1++;
        else dp[i] = 1;
    }
    ans = min(ans,cnt1);
    int i = 0;
    while(j<n)
    {
        if(dp[i]==0) cnt1--;
        if(s[j] != 'B') cnt1++;
        else dp[j] = 1;
        ans = min(ans,cnt1);
        //cout<<i<<" "<<j<<" "<<cnt1<<endl;
        i++;
        j++;
    }
   // cout<<i<<" "<<j<<endl;
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1 ;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}