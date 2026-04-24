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
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
 
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
 
    vector<pair<int, int>> a1(n), a2(n);
    for (int i = 0; i < n; ++i)
    {
        a1[i].first = v[i];
        a1[i].second = i % 2;
    }
    for (int i = 0; i < n; ++i)
    {
        a2[i].first = v[i];
        a2[i].second = (i + 1) % 2;
    }
 
    sort(all(a1));
    sort(all(a2));
    bool flaga1 = true, flaga2 = true;
    for (int i = 0; i < n - 1; ++i)
    {
        if (a1[i].second == a1[i + 1].second)
        {
            flaga1 = false;
        }
        if (a2[i].second == a2[i + 1].second)
        {
            flaga2 = false;
        }
    }
 
    if (!flaga1 && !flaga2)
    {
        cout << "NO
";
        return;
    }
    cout << "YES
";
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