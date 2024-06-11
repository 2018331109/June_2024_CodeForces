#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int N = 2e5+5;
const int INF=1e18;
int M=998244353;

void solve()
{
    int n;
    cin>>n;
    int mx=0, sum=0, ans=0, x;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        mx=max(mx, x);
        sum+=x;
        if(sum-mx==mx) ans++;

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

