#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;
string a, b;

int call(int i)
{
    int j=0;
    int cnt=0;
    while(j<a.size() and i<b.size())
    {
        if(a[j]==b[i])
        {
            cnt++;
            i++, j++;
        }
        else
        {
            j++;
        }
    }
    return cnt;
}


void solve()
{

    int x, y;
    cin>>x>>y;
    if(y>=-1){
        yes;
        return;
    }
    no;
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

