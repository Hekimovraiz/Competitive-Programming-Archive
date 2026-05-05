/*
 * Problem: 3A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/3/problem/A
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
 
const int sz = 31 + 31; // hmm... RunTime error?
const int LOG = 63;
const int sz2 = 1e3 + 31;
const int MOD = 1e9 + 7;
const int INF = 1e18;
// cd Documents && cd Cpp && g++ main.cpp -o main && ./main
 
// variables:
str s1, s2;
int king_idx_x = 0, king_idx_y = 0, final_idx_x = 0, final_idx_y = 0;
int dp[sz][sz];
str par[sz][sz];
pii parent[sz][sz];
queue<pii> q;
int dx[] = {0, 0, 0, 1, -1, 1, -1, 1, -1}, dy[] = {0, -1, 1, 0, 0, 1, -1, -1, 1};
str D[] = {"", "L", "R", "U", "D", "RU", "LD", "LU", "RD"};
 
bool check_in(int x, int y)
{
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}
 
void BFS()
{
    /// L, R, U, D, LU, LD, RU və ya RD.
    for (int i = 1; i <= 8; ++i)
    {
        for (int j = 1; j <= 8; ++j)
        {
            dp[i][j] = INF;
        }
    }
 
    dp[king_idx_x][king_idx_y] = 0;
    q.push({king_idx_x, king_idx_y});
 
    while (!q.empty())
    {
        auto f = q.front();
        q.pop();
 
        for (int i = 1; i <= 8; ++i)
        {
            int new_x = f.first + dx[i];
            int new_y = f.second + dy[i];
 
            if (check_in(new_x, new_y))
            {
                if (dp[f.first][f.second] + 1 < dp[new_x][new_y])
                {
                    dp[new_x][new_y] = dp[f.first][f.second] + 1;
                    par[new_x][new_y] = D[i];
                    parent[new_x][new_y] = f;
                    q.push({new_x, new_y});
                }
            }
        }
    }
}
 
void solve()
{
    cin >> s1 >> s2;
    s1 = " " + s1;
    s2 = " " + s2;
 
    king_idx_y = s1[1] - 'a' + 1;
    king_idx_x = s1[2] - '0';
    final_idx_y = s2[1] - 'a' + 1;
    final_idx_x = s2[2] - '0';
 
    BFS();
 
    vector<str> path;
    int x = final_idx_x, y = final_idx_y;
    while (x != king_idx_x || y != king_idx_y)
    {
        path.pb(par[x][y]);
        auto p = parent[x][y];
        x = p.first;
        y = p.second;
    }
    reverse(all(path));
    cout << path.size() << "
";
    for (auto x : path)
    {
        cout << x << "
";
    }
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