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
    int n, k;
    cin>>n>>k;

    vector<int>v(n, 0), smax(n, 0);
    for(int i=0; i<n; i++) cin>>v[i];
    //cout<<endl;
    v[0]+=k;
    smax[n-1]=v[n-1];
    for(int i=n-2; i>=0; i--) smax[i]=max(smax[i+1], v[i]);
    map<int, int>mp;
    int pre=0, mx=smax[0], cnt=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]>mx)
        {
            cout<<0<<" ";
        }
        else if(v[i]==mx)
        {
            if(mp[mx]==0)
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<i<<" ";
            }

        }
        else
        {
            int temp=v[i]+pre;
            if(temp>=mx)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<i+1<<" ";
            }
        }

        pre+=v[i];
        if(v[i]>0) cnt++;
        mp[v[i]]++;
    }
    cout<<endl;

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
