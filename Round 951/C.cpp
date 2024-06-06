#include <bits/stdc++.h>
using namespace std;
#define int long long int
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
    int a[n];
    int mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mn=min(mn, a[i]);
    }
    int l=mn, r=2e9;
    int ans=-1;
    while(l<r)
    {
        int mid=(l+r)>>1;
        int total=0;
        for(int i=0; i<n; i++)
        {
            int x=(mid+a[i]-1)/a[i];
            total+=x;
        }
        if(total>=mid)
        {
            l=mid+1;
        }
        if(total<mid)
        {
            ans=mid;
            break;
        }
    }
    if(ans==-1)
    {
        neg;
        return;
    }
    for(int i=0; i<n; i++)
    {
        cout<<(ans+a[i]-1)/a[i]<<" ";
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

