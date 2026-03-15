/*
 * Problem: 999
 * Platform: EOlymp
 * Link: https://www.eolymp.com/en/problems/999
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

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 1 + 31; // hmm... RunTime error?
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;

// variables:
str at1, at2;
int at1x, at1y, at2x, at2y;
map<char, int> mp;
set<pair<int, int>> pos_at1, pos_at2;
vector<int> dr1 = {31, +2, +2, +1, +1, -1, -1, -2, -2}, dr2 = {31, -1, +1, -2, +2, -2, +2, -1, +1};
bool used1[31][31], used2[31][31];
map<pair<int, int>, int> at1cnt, at2cnt;

void DFS1(int x, int y, int cnt)
{
    used1[x][y] = true;
    pos_at1.insert({x, y});
    at1cnt[{x, y}] = min(cnt, at1cnt[{x, y}]);

    for (int i = 1; i <= 8; ++i)
    {
        if (x + dr1[i] >= 1 && x + dr1[i] <= 8 && y + dr2[i] >= 1 && y + dr2[i] <= 8 && !used1[x + dr1[i]][y + dr2[i]])
        {
            DFS1(x + dr1[i], y + dr2[i], cnt + 1);
        }
    }
}

void DFS2(int x, int y, int cnt)
{
    used2[x][y] = true;
    pos_at2.insert({x, y});
    at2cnt[{x, y}] = min(cnt, at2cnt[{x, y}]);

    for (int i = 1; i <= 8; ++i)
    {
        if (x + dr1[i] >= 1 && x + dr1[i] <= 8 && y + dr2[i] >= 1 && y + dr2[i] <= 8 && !used2[x + dr1[i]][y + dr2[i]])
        {
            DFS2(x + dr1[i], y + dr2[i], cnt + 1);
        }
    }
}

void solve()
{
    cin >> at1 >> at2;
    /*
    char ch[] = {'&', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for (int i = 1; i <= 8; ++i)
    {
        cout << "mp[" << ch[i] << "] = " << i << ";\n";
    }
    */
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;
    mp['d'] = 4;
    mp['e'] = 5;
    mp['f'] = 6;
    mp['g'] = 7;
    mp['h'] = 8;

    at1x = mp[at1[0]], at1y = at1[1] - '0', at2x = mp[at2[0]], at2y = at2[1] - '0';
    for (int i = 1; i <= 8; ++i)
    {
        for (int j = 1; j <= 8; ++j)
        {
            used1[i][j] = false;
            used2[i][j] = false;
            at1cnt[{i, j}] = INF;
            at2cnt[{i, j}] = INF;
        }
    }

    DFS1(at1x, at1y, 0);
    DFS2(at2x, at2y, 0);
    int mn = INF;
    for (auto p : pos_at1)
    {
        if (pos_at2.count(p) > 0)
        {
            mn = min(at2cnt[p] + at1cnt[p], mn);
        }
    }
    cout << (mn == INF ? -1 : mn) << "\n";
}

signed main()
{
    __Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    // sieve();

    int t = 1;
    /// cin >> t;

    while (t-- > 0)
    {
        solve();
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