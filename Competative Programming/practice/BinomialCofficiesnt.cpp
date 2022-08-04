#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define fr(i, n) for (int i = 0; i < n; i++)
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
    set<int> st;
    fr(i,n) 
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    if(n==1)
    {
        pr(-1);
        return;
    }
    st.insert(1e9);
    vi b(n);
    fr(i,n)
    {
        if(st.find(a[i])!=st.end())
        {
            st.erase(a[i]);
            int it = *(st.begin());
            b[i] = it;
            st.erase(it);
            st.insert(a[i]);
        }
        else{
            int it = *(st.begin());
            b[i] = it;
            st.erase(it);
        }
    }
    // sort_i(a);
    // for(auto it : b) cout<<it<<" ";
    // cout<<endl;
    
    if(b[n-1] == 1e9 && n>2){
        // pr(b[n-1]);
        // pr(b[n-2]);
        b[n-1] = b[n-2];
        b[n-2] = n;
    }
    for(auto it : b) cout<<it<<" ";
    cout<<endl;
    
   
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