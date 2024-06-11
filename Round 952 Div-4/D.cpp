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
    int n, m;
    cin>>n>>m;
    int row=0;
    int l=0, r=m-1, cnt=0, mx=0;
    string s, ss;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        cnt=0;
        for(auto it:s) if(it=='#') cnt++;
        if(cnt>mx) row=i, ss=s, mx=cnt;
    }
    while(ss[l]!='#') l++;
    while(ss[r]!='#') r--;
    cout<<row+1<<" "<<(l+(r-l)/2+1)<<endl;

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

