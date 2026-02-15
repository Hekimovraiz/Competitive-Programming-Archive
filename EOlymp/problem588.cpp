/*
 * Problem: 588
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/588
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

const int sz = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int dp[sz], a[sz];

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    dp[1] = 0;
    if (n >= 2)
    {
        dp[2] = abs(a[2] - a[1]);
    }
    for (int i = 3; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + abs(a[i] - a[i - 1]);
        if (i >= 3 && abs(a[i - 2] - a[i - 1]) + abs(a[i - 1] - a[i]) > 3 * abs(a[i - 2] - a[i]))
        {
            dp[i] = min(dp[i], dp[i - 2] + 3 * abs(a[i] - a[i - 2]));
        }
    }

    cout << dp[n] << "\n";
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
/*

*/