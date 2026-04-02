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

const int sz = 4005;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz];

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    for (int i = 0; i <= n; ++i)
    {
        dp[i] = -1;
    }

    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int num : {a, b, c})
        {
            if (i >= num && dp[i - num] != -1)
            {
                dp[i] = max(dp[i], dp[i - num] + 1);
            }
        }
    }

    cout << dp[n] << '\n';
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
