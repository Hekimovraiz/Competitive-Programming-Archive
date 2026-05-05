/*
 * Problem: 245D
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/245/problem/D
 */
/// Author: Raiz
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
 
#define RAIZ
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
#define ull unsigned long long
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
 
const int sz = 1e6 + 31; // hmm... RunTime error?
const int LOG = 63;
const int sz2 = 1e3 + 31;
const int MOD = 1e9 + 7;
const int INF = 1e18;
// cd Documents && cd Cpp && g++ main.cpp -o main && ./main
 
// variables:
int n;
 
void solve()
{
    cin >> n;
    vector<vi> v(n + 1, vi(n + 1));
    
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> v[i][j];
        }
    }
    if(n == 1)
    {
        cout << 0 << "
";
        return;
    }
    vi ans;
 
    for (int i = 1; i <= n; ++i)
    {
        int _and = (i == 1  ? v[i][2] : v[i][1]);
        for (int j = (i == 1 ? 2 : 1); j <= n; ++j)
        {
            if (i != j)
            {
                _and |= v[i][j];
            }
        }
        ans.pb(_and);
    }
 
    cerr << "____________
";
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "
";
    /*
a = 128
(128 | 128 | 128) = 128 <= a
(128 | 148 | 160) = 180
(128 | 148  | 128) = 128
(128 | 160 | 128) = 160
    */
}
 
signed main()
{
#ifdef RAIZ
    auto _clock_start = chrono::high_resolution_clock::now();
#endif
    __Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out" , "w", stdout);
    // sieve();
 
    int t = 1;
    /// cin >> t;
 
    while (t-- > 0)
    {
        solve();
    }
 
#ifdef RAIZ
    cerr << "Executed in " << chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - _clock_start).count() << "ms." << endl;
#endif
    return 0;
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