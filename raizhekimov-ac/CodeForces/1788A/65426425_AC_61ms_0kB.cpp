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

const int sz = 1e3 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int dp[sz], dprev[sz], a[sz];

void solve()
{
    int n;
    cin >> n;
    cin >> a[1];
    dp[1] = a[1];
    for (int i = 2; i <= n; ++i)
    {
        cin >> a[i];
        dp[i] = dp[i - 1] + (a[i] == 2);
    }

    dprev[n] = a[n];
    for (int i = n - 1; i >= 1; --i)
    {
        dprev[i] = dprev[i + 1] + (a[i] == 2);
    }

    for (int i = 1; i <= n - 1; ++i)
    {
        if (dp[i] == dprev[i + 1])
        {
            cout << i << '\n';
            return;
        }
    }

    cout << -1 << '\n';
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