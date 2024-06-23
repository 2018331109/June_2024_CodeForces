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
    int n, k, cnt=0, ans=0;
    cin>>n>>k;
    map<int, vector<int>>mp;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(auto it:a)
    {
        mp[it%k].pb(it);
    }
    for(auto it:mp)
    {
        vector<int>v=it.second;
        int sz=v.size();
        if(sz%2)
        {
            cnt++;
            if(sz>1)
            {
                vector<int>suffix, prefix;
                for(int i=0; i<sz-1; i++)
                {
                    if(i%2==0)
                    {
                        prefix.pb(v[i+1]-v[i]);
                    }
                    else
                    {
                        suffix.pb(v[i+1]-v[i]);
                    }
                }
                int nsz=prefix.size();
                for(int i=nsz-2; i>=0; i--)
                {
                    suffix[i]+=suffix[i+1];
                }
                int mn=suffix[0];
                int pre=0;
                for(int i=0; i<nsz-1; i++)
                {
                    pre+=prefix[i];
                    mn=min(mn, pre+suffix[i+1]);
                }
                pre+=prefix[nsz-1];
                mn=min(mn, pre);
                ans+=mn/k;
            }
        }
        else
        {
            for(int i=0; i<sz; i+=2)
            {
                ans+=(v[i+1]-v[i])/k;
            }
        }
    }

    if(cnt>1)
    {
        neg;
        return;
    }
    cout<<ans<<endl;
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

