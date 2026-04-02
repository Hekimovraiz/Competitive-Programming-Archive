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

const int sz = 1e4;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int dp[sz], a[sz];

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    dp[0] = 0;
    int k;
    cin >> k;
    for (int i = 1; i <= n + 1; ++i)
    {
        dp[i] = LLONG_MIN;
        for (int j = 1; j <= k; ++j)
        {
            if(i - j >= 0)
            {
                dp[i] = max(dp[i] , dp[i - j] + (i == n + 1 ? 0 : a[i]));
            }
        }
    }
    cout << dp[n + 1] << "\n";

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
