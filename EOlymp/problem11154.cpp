/*
 * Problem: 11154
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/11154
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

const int sz = 103;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int s = max(a, c); // bashlanagic
    int e = min(b, d); // son

    int ans = 0;

    if (s <= e)
    {
        // (b - a) + (d - c) - (s - e)
        ans = (b - a) + (d - c) - abs(s - e);
    }
    else
    {
        // (b - a) + (d - c) 
        ans = (b - a) + (d - c);
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