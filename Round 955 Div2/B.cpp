#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    int x, y, k;
    cin>>x>>y>>k;
    while(x!=1 and k>0)
    {
        int d=(x/y)+1;
        int xy=d*y;
        int need=xy-x;
        if(need<=k)
        {
            k-=need;
            x+=need;
        }
        else
        {
            x+=k;
            k=0;
        }
        while(x%y==0)
        {
            x/=y;
        }
    }
    if(x==1)
    {
        int need=y-x;
        k%=need;
        x+=k;
    }
    cout<<x<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

