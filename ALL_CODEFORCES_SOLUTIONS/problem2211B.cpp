// Problem ID: 2211B
// Platform: Codeforces
// Link: https://codeforces.com/contest/2211/problem/B

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
 
#define int long long // Don't forget!!
#define __Lek_Raiz                \
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
/// #define size(x) (int)x.size()
#define rs(x) resize(x)
#define vi vector<int>
#define input1(v)                \
    for (int i = 1; i <= n; ++i) \
    cin >> v[i]
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
 
const int sz = 2e5 + 31; // hmm... RunTime error?
const int sz2 = 1e3 + 31;
const int LOG = 63;
const int MOD = 676767677;
const int INF = 1e18;
 
// variables:
int n, m, ans = 0, cnt = 0;
vi v, k;
int a[sz2][sz2];
 
void solve()
{
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << 1 << "
";
        for (int i = 1; i <= x; ++i)
        {
            cout << -1 << " ";
        }
        for (int i = 1; i <= x; ++i)
        {
            cout << 1 << " 
"[i == x];
        }
    }
    else if (x > y)
    {
        cout << (x - y) % MOD << "
";
        for (int i = 1; i <= x; ++i)
        {
            cout << 1 << " ";
        }
        for (int i = 1; i <= y; ++i)
        {
            cout << -1 << " 
"[i == y];
        }
    }
    else
    {
        cout << (y - x) % MOD << "
";
        for (int i = 1; i <= x; ++i)
        {
            cout << 1 << " ";
        }
        for (int i = 1; i <= y; ++i)
        {
            cout << -1 << " 
"[i == y];
        }
    }
}
void solve1()
{
 
    int x, y;
    cin >> x >> y;
    vi d(max(x, y) + 1);
    for (int i = 1; i <= max(x, y); ++i)
    {
        for (int j = i; j <= max(x, y); j += i)
        {
            ++d[j];
        }
    }
    if (x == y)
    {
        cout << 1 << "
";
        for (int i = 0; i < x; ++i)
        {
            cout << 1 << " ";
        }
        for (int i = 0; i < y; ++i)
        {
            cout << -1 << " ";
        }
        cout << "
";
    }
    else
    {
        cout << d[abs(x - y)] % MOD << "
";
        if (x > y)
        {
            for (int i = 0; i < x; ++i)
            {
                cout << 1 << " ";
            }
            for (int i = 0; i < y; ++i)
            {
                cout << -1 << " ";
            }
        }
        else
        {
            for (int i = 0; i < y; ++i)
            {
                cout << -1 << " ";
            }
            for (int i = 0; i < x; ++i)
            {
                cout << 1 << " ";
            }
        }
        cout << "
";
    }
}
 
signed main()
{
    __Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out" , "w", stdout);
    // sieve();
 
    int t = 1;
    cin >> t;
 
    while (t-- > 0)
    {
        solve1();
    }
}
/*
.....               ....................   .......            ........ .....
.+@@*               .-@@@@@@@@@@@@@@@@@+    =%@%-.        ..:*%@@@=... =%@%:.
.+@@*               .-@@@%%%%%%%%%%%%%%+    =%@%-.       .+%@@@*-..    =%@%:
.+@@*               .-@@#:...............   =%@%-.   ..=#%@@#=:...     =%@%:
.+@@*               .-@@#:.                 =%@%-. .-*%@@%*-....       =%@%:
.+@@*               .-@@%#*************=    =%@@#**%@@@#=...           =%@%:
.+@@*               .-@@@@@@@@@@@@@@@@@*    =%@@@@@@@@%+:.             =%@%:
.+@@*               .-@@#:..............    =%@%-  .+%@@@%-..          =%@%:
.+@@*               .-@@#:.                 =%@%-. ...:*@@@%*:..       =%@%:
.+@@#::::::::::::::..=@@#-::::::::::::::    =%@%-...   ..-#@@@#=.      =%@%:
.+@@@@@@@@@@@@@@@@%-.=@@@@@@@@@@@@@@@@@*    =%@%-...      .:=%@@%*-.   =%@%:
.-****************+:.:*****************-.   :+*+:.           .-+***=.. -+*+.
 
*/
//