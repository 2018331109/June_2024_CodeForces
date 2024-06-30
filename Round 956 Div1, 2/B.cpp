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

void solve()
{
    int n;
    cin>>n;
    int a[n], b[n];
    int mx=0;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mx=max(a[i], mx);
        if(mx>a[i])
        {
            v.pb(mx-a[i]);
        }
    }
    sort(v.begin(), v.end());
    int sum=0;
    int cnt=0;
    int i=0;
//    for(auto it:v){
//        cout<<it<<" ";
//    }
//    cout<<endl;
    while(i<v.size())
    {
        if(v[i]-sum>0)
        {
            cnt+=(v.size()-i+1)*(v[i]-sum);
            sum+=v[i]-sum;
            //cnt++;
        }
        i++;

    }
    cout<<cnt<<endl;
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

