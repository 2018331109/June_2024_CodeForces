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
    int n, l, r;
    cin>>n>>l>>r;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int ans=0;
    int i=0, j=0, total=0;
    while(j<n)
    {
        total+=a[j];
        while(i<=j and total>r)
        {
            total-=a[i];
            i++;
        }
        if(total>=l and total<=r)
        {
            ans++;
            i=j+1;
            total=0;
        }


        j++;
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

