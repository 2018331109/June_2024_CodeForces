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
    int n;
    cin>>n;
    map<int, int>mp, st;
    int x, cnt=0;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        if(a[i]!=b[i])
        {
            cnt++;
            mp[b[i]]++;
        }
        st[b[i]]++;
    }
    int m, f=0;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x;
        if(mp[x]>0)
        {
            mp[x]--;
            cnt--;
        }
        else
        {
            if(cnt==0)
            {
                f++;
            }
        }
        if(st[x]>0)
        {
            f=0;
        }
    }
    if(f!=0 or cnt!=0)
    {
        no;
        return;
    }
    yes;
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

