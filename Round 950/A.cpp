#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;
const int INF=1e18;

void solve()
{
    int n, m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int>v(10, 0);
    for(auto it:s)
    {
        v[it-'A']++;
    }
    int ans=0;
    for(int i=0; i<7; i++)
    {
        ans+=max(0ll, m-v[i]);
    }
    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

