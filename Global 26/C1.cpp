#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;
const int INF=1e18;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1, 0), suffix(n+1, 0);
    for(int i=0; i<n; i++) cin>>v[i];
    suffix[n-1]=v[n-1];
    for(int i=n-2; i>=0; i--) suffix[i]=suffix[i+1]+v[i];
    int ans=abs(suffix[0]), total=0;
    for(int i=0; i<n; i++)
    {
        total+=v[i];
        int mx=abs(abs(total)+suffix[i+1]);
        ans=max(ans, mx);
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

