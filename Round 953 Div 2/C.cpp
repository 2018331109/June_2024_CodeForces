#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    int n, k;
    cin >> n >> k;
    int mx = 0;

    // Calculate the maximum possible sum for pairs
    if (n % 2 == 1)
    {
        mx = 2 * (n * (n + 1));
    }
    else
    {
        mx = 2 * (n * n);
    }

    // Check if k is achievable
    if (mx < k || k % 2 != 0)
    {
        no;
        return;
    }

    vector<int> ans(n + 1, 0);
    int i = 1, j = n;
    while (k > 0 && i < j)
    {
        int now = 2 * (j - i);
        if (k - now >= 0)
        {
            ans[j] = i;
            ans[i] = j;
            k -= now;
        }
        else
        {
            int need = min(k / 2, j - i);
            if (need == 0) break; // To avoid infinite loop
            ans[j] = j - need;
            ans[j - need] = j;
            k -= 2 * need;
        }
        i++;
        j--;
    }

    // If k is not fully exhausted, it means we couldn't pair correctly
    if (k > 0)
    {
        no;
        return;
    }

    yes;
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] == 0)
        {
            cout << i << " ";
        }
        else
        {
            cout << ans[i] << " ";
        }
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

