/*
 * Problem: 10568
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/10568
 */

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

const int sz = 1e3 + 3;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int a[sz];

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    int ans = 0, l = 1;

    for (int r = 1; r <= n; r++)
    {
        while (a[r] - a[l] > k)
        {
            l++;
        }
        ans = max(ans, r - l + 1);
    }

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