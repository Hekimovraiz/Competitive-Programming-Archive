/*
 * Problem: 1642
 * Platform: CSES
 * Link: https://cses.fi/problemset/task/1642
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

const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    for (int i = 1; i <= n; ++i)
    {
        unordered_map<int, int> mp;
        int k = x - v[i].first;
        for (int j = i + 1; j <= n; ++j)
        {
            int f = k - v[j].first;
            for (int d = j + 1; d <= n; ++d)
            {
                int w = f - v[d].first;

                if (mp.count((w)))
                {
                    cout << v[i].second << " " << v[j].second << " " << v[d].second << " " << mp[w] << "\n";
                    return;
                }
                mp[v[d].first] = v[d].second;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
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