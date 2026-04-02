/*
 * Problem: 451B - Sort the Array
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/451/B
 */

// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
/// #include "__Lek_Raiz.h"

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

const int sz = 1e9 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    vector<int> k = v;
    sort(all(k));
    int idx1 = 0, idx2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] != k[i])
        {
            idx1 = i;
            break;
        }
    }

    for (int i = n - 1; i > 0; --i)
    {
        if (k[i] != v[i])
        {
            idx2 = i;
            break;
        }
    }

    if (idx1 == 0 && idx2 == 0)
    {
        cout << "yes\n"
             << 1 << " " << 1 << "\n";
        return;
    }

    reverse(v.begin() + idx1, v.begin() + idx2 + 1);
    if (v == k)
    {
        cout << "yes\n"
             << ++idx1 << " " << ++idx2 << "\n";
    }
    else
    {
        cout << "no\n";
    }
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