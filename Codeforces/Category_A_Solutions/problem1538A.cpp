/*
 * Problem: 1538A - Stone Game
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1538/A
 */

// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#ifndef ONLINE_JUDGE
#include "__Lek_Raiz.h"
#else
#define debug(...)
#define debugArr(...)
#define debugG(...)
#endif

#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")

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
#define FOR0(i, n) for (int i = 0; i < n; ++i)
#define FOR1(i, n) for (int i = 1; i <= n; ++i)
#define size(x) (int)x.size()

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 100 + 31;
const int MOD = 1000003;
const int INF = 1e18;

// variables :
int a[sz];

void solve()
{
    int n, mx = -INF, mn = INF, mn_idx = 0, mx_idx = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (mn > a[i])
        {
            mn = min(mn, a[i]);
            mn_idx = i;
        }
        if (mx < a[i])
        {
            mx_idx = i;
            mx = max(mx, a[i]);
        }
    }

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    if (n == 2)
    {
        cout << 2 << "\n";
        return;
    }

    if (mn_idx < mx_idx)
    {
        cout << min(n - mn_idx + 1, mn_idx + (min(mx_idx - mn_idx, n - mx_idx + 1))) << "\n";
    }
    else
    {
        cout << min(n - mx_idx + 1, mx_idx + (min(mn_idx - mx_idx, n - mn_idx + 1))) << "\n";
    }
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}

/*

*/