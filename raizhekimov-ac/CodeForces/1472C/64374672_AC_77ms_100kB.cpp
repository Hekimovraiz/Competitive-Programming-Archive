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

const int sz = 40;
const int MOD = 1000003;
const int INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    int a[n + 1], dp[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    for (int i = n; i >= 1; --i)
    {
        if (i + a[i] > n)
        {
            dp[i] = a[i];
        }
        else
        {
            dp[i] = a[i] + dp[i + a[i]];
        }
    }

    cout << *max_element(dp + 1, dp + n + 1) << "\n";
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
