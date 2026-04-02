/*
 * Problem: 1729A - Two Elevators
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1729/A
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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
priority_queue<int, vector<int>, greater<int>> pq;

const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int t1 = abs(a - 1), t2;

    if (c > b)
    {
        t2 = (c - b) + (c - 1);
    }
    else
    {
        t2 = b - 1;
    }

    if (t1 == t2)
    {
        cout << 3 << "\n";
    }
    else if (t1 < t2)
    {
        cout << 1 << "\n";
    }
    else if (t2 < t1)
    {
        cout << 2 << "\n";
    }
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