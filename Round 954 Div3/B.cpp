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
    int n, m;
    cin>>n>>m;
    vector<vector<int>>v(n, vector<int>(m, 0));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            //cin>>v[i][j];
            int now=0;
            if(i+1<n) now=max(now, v[i+1][j]);
            if(i-1>=0) now=max(now, v[i-1][j]);
            if(j+1<m) now=max(now, v[i][j+1]);
            if(j-1>=0) now=max(now, v[i][j-1]);
            v[i][j]=min(v[i][j], now);
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
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

