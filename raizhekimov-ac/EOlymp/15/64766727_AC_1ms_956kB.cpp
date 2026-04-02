#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define ll long long
#define str string
#define pb push_back
#define pf push_front
#define ep emplace_back
#define pii pair<int, int>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 101;
const int MOD = 1000003;
const int INF = 1e18;
int a[sz][sz], dp[sz][sz];

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (int i = n; i >= 1; --i)
    {
        dp[i][1] = dp[i + 1][1] + a[i][1];
    }
    for (int i = 1; i <= m; ++i)
    {
        dp[n][i] = dp[n][i - 1] + a[n][i];
    }

    for (int i = n - 1; i >= 1; --i)
    {
        for (int j = 2; j <= m; ++j)
        {
            dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]) + a[i][j];
        }
    }

    int i = 1, j = m;
    str ans = "";

    while (i != n || j != 1)
    {
        if (i == n)
        {
            --j;
            ans += "R";
        }
        else if (j == 1)
        {
            ++i;
            ans += "F";
        }
        else
        {
            if (dp[i][j - 1] > dp[i + 1][j])
            {
                ans += "R";
                --j;
            }
            else
            {
                ++i;
                ans += "F";
            }
        }
    }

    reverse(all(ans));
    cout << ans << "\n";
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}