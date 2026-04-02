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
#define ep emplace_back

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 1e6 + 9;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int dp[sz], a[sz];

void solve()
{
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    dp[0] = 1;

    for (int j = 1; j <= n; ++j)
    {
        for (int i = 1; i <= x; ++i)
        {
            if (i - a[j] >= 0)
            {
                dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
            }
        }
    }
    cout << dp[x] << "\n";
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
