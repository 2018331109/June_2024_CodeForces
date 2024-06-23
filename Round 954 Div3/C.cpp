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
     string s;
     cin>>s;
     set<int>st;
     for(int i=0;i<m;i++){
        int x;
        cin>>x;
        st.insert(x);
     }
     string p;
     cin>>p;
     sort(p.begin(), p.end());
     int i=0;
     for(auto it:st){
        s[it-1]=p[i++];
     }
     cout<<s<<endl;
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

