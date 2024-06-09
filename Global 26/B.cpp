#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;
const int INF=1e18;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int f=0;
    for(int i=1; i<n-1; i++)
    {
        if(s[i]=='0')
        {
            f=1;
            break;
        }
    }
    if((s[0]!='1') or (s[n-1]=='9') or (f==1))
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

