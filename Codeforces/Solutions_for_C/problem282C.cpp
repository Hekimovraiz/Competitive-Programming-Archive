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
 
const int sz = 1e6 + 31; // hmm... RunTime error?
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;
 
// variables:
int a[9][9];
bool used[9][9];
vector<int> dr1 = {1, 0, 1, -1}, dr2 = {-1, 1, 0, 0}; // olmureee
 
bool cheek(int x, int y, int x1, int y1)
{
    if (x + x1 >= 1 && x + x1 <= 8 && y + y1 <= 8 && y + y1 >= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
void DFS(int x, int y)
{
    used[x][y] = true;
 
    for (int i = 0; i <= 3; ++i)
    {
        if (cheek(x, y, dr1[i], dr2[i]))
        {
            if (!used[x + dr1[i], y + dr2[i]])
            {
                DFS(x + dr1[i], y + dr2[i]);
            }
        }
    }
}
 
void solve()
{
    str a, b;
    cin >> a >> b;
    bool fl1 = false, fl2 = false;
    for (auto x : a)
    {
        if (x == '1')
        {
            fl1 = true;
            break;
        }
    }
    for (auto x : b)
    {
        if (x == '1')
        {
            fl2 = true;
            break;
        }
    }
    if ((int)a.size() == (int)b.size())
    {
        if (fl1 == fl2)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
    }
    else
    {
        cout << "NO
";
    }
}
 
signed main()
{
    __Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    // sieve();
 
    int t = 1;
    // cin >> t;
 
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