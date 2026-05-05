/*
 * Problem: 1519D
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1519/problem/D
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
int a[sz], b[sz],pref[sz];
 
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        pref[i] = pref[i - 1] + a[i] * b[i];
    }
    int res = pref[n];
    for (int pos = 1; pos <= n; ++pos)
    {
        int curr = 0, l = pos, r = pos;
        while (l >= 1 && r <= n)
        {
            if (l == r)
            {
                curr += a[l] * b[r];
            }
            else
            {
                curr += a[l] * b[r] + a[r] * b[l];
            }
            res = max(res, pref[n] - (pref[r] - pref[l - 1]) + curr);
            --l;
            ++r;
        }
    }
    for (int pos = 1; pos <= n; ++pos)
    {
        int curr = 0, l = pos, r = pos + 1;
        while (l >= 1 && r <= n)
        {
            if (l == r)
            {
                curr += a[l] * b[r];
            }
            else
            {
                curr += a[l] * b[r] + a[r] * b[l];
            }
            res = max(res, pref[n] - (pref[r] - pref[l - 1]) + curr);
            --l;
            ++r;
        }
    }
    cout << res << '
';
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