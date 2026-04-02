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

const int sz = 1e6;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz], a[sz];

void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + a[i];
    }
    dp[0] = 0;
    int min_sum = LLONG_MAX, idx = 0;
    for (int i = k; i <= n; ++i)
    {
        if (dp[i] - dp[i - k] < min_sum)
        {
            min_sum = min(min_sum, dp[i] - dp[i - k]);
            idx = i - k + 1;
            ///cout << " i: " << i << " dp[i]: " << dp[i] << " dp[i - k]: " << dp[i - k] << " i - k: " << i - k  << " idx: " << idx << "\n";
        }
    }

    cout << idx << "\n";
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
