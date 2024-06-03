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
    int n, f, k;
    cin>>n>>f>>k;
    vector<int>v(n, 0);
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(i==f-1)
        {
            x=v[i];
        }
    }
    sort(v.begin(), v.end());
    int l=lower_bound(v.begin(), v.end(), x)-v.begin()+1;
    int r=upper_bound(v.begin(), v.end(), x)-v.begin();
    l=n-l+1, r=n-r+1;
    swap(l, r);
    if(r<=k)
    {
        yes;
        return;
    }
    if(l>k)
    {
        no;
        return;
    }
    cout<<"MAYBE"<<endl;
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

