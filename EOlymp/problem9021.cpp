/*
 * Problem: 9021
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/9021
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

const int sz = 1e6 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

vector<int> v, c;
vector<int> ans;

void sieve()
{
    int p2 = 1;
    for (int i = 0; i < 60; ++i)
    {
        v.pb(p2);
        p2 <<= 1;
    }

    int p3 = 1;
    for (int i = 0; i < 40; ++i)
    {
        c.pb(p3);
        p3 *= 3;
    }

    for (auto x : v)
    {
        for (auto y : c)
        {
            if (x > INF / y)
            {
                break;
            }
            ans.pb(x * y);
        }
    }
}

void solve()
{
    int a, b;
    sort(all(ans));

    while (cin >> a >> b)
    {
        cout << upper_bound(all(ans), b) - lower_bound(all(ans), a) << "\n";
    }
}

signed main()
{
    sieve();
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}