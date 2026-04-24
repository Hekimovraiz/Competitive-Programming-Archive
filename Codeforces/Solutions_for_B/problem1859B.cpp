/*
 * Problem: 1859B - Olya and Game with Arrays
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1859/problem/B
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
 
const int sz = 2020 * 1000 + 2021 * 1000 + 3;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> v;
    vector<pair<int, int>> mp;
 
    if (n == 1)
    {
        int m, mn = INF;
        cin >> m;
        for (int i = 1; i <= m; ++i)
        {
            int x;
            cin >> x;
            mn = min(mn, x);
        }
        cout << mn << "
";
        return;
    }
 
    while (n--)
    {
        int m;
        cin >> m;
        v.resize(m);
 
        for (int i = 0; i < m; ++i)
        {
            cin >> v[i];
        }
 
        sort(all(v));
        mp.pb({v[0], v[1]});
        v.clear();
    }
 
    int mn = INF, sum = 0, num = 0 , mn22 = INF;
 
    for (auto [min1, min2] : mp)
    {
        if (min2 < mn)
        {
            mn = min2;
            num = min1;
        }
        sum += min2;
        mn22 = min(mn22 , min1);
    }
 
    cout << sum - mn +mn22 << "
";
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