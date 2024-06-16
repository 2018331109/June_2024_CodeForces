#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int mod=1e9+7;
const int N = 2e5+5;
const int INF=1e18;
int md=998244353;

void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    if(a>=b){
        cout<<(n*a)<<endl;
        return;
    }
    int ba=b-a;
    int up=(b*(b+1))/2;
    int down=b-min(ba, n);
    down=(down*(down+1))/2;
    int ans=up-down;
    int rm=n-min(n, ba);
    ans+=rm*a;
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

