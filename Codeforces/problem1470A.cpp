/*
 * Problem: 1470A - Strange Birthday Party
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1470/A
 */

// Author: Raiz
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
#define rall(v) v.rbegin(), v.rend()
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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> k(n), c(m + 1);

    for (int i = 0; i < n; ++i)
    {
        cin >> k[i];
    }

    for (int i = 1; i <= m; ++i)
    {
        cin >> c[i];
    }

    sort(rall(k));

    int ans = 0, ptr = 1;

    for (int i = 0; i < n; ++i)
    {
        if (ptr <= k[i] && c[ptr] < c[k[i]])
        {
            ans += c[ptr];
            ++ptr;
        }
        else
        {
            ans += c[k[i]];
        }
    }

    cout << ans << '\n';
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