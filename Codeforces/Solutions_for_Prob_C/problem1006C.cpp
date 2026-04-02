/*
 * Problem: 1006C - Three Parts of the Array
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1006/C
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
#define ep emplace_back

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int INF = 1e18;
const int sz = 3e5 + 9;
int a[sz];

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    set<pair<int, int>> suff;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    int cem = 0;
    for (int i = n; i >= 1; --i)
    {
        cem += a[i];
        suff.insert({cem, i});
    }
    int res = 0;
    cem = 0;

    for (int i = 1; i <= n; ++i)
    {
        cem += a[i];
        auto x = suff.lower_bound({cem, 0});
        if ((x->first) == cem && (x->second) > i)
        {
            res = max(res, cem);
        }
    }

    cout << res << '\n';
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