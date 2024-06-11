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
    int v[3], k;
    cin>>v[0]>>v[1]>>v[2]>>k;
    sort(v, v+3);
    int a=v[0], b=v[1], c=v[2];
    int mn, mx, ans=0;
    for(int i=1; i<=a; i++)
    {
        if(k%i==0)
        {
            int ki=k/i;
            for(int j=1; j<=sqrt(ki); j++)
            {
                if(ki%j==0)
                {
                    mx=max(j, ki/j);
                    mn=min(j, ki/j);
                    if(mx<=c and mn<=b)
                    {
                        int temp=(a-i+1)*(b-mn+1)*(c-mx+1);
                        ans=max(ans, temp);
                    }
                }
            }
        }
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

