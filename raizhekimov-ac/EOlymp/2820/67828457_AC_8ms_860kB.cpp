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

const int sz = 10 + 31;
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;

/// variables:
str x, y;
int i, j, toi, toj;
map<char, int> mp;
int dp[sz][sz];

vector<int> dh = {+2, +2, +1, +1, -1, -1, -2, -2}, dr = {-1, +1, -2, +2, -2, +2, -1, +1}; // ez

void BFS(int h, int r, int cnt)
{
    /// direction1 -> {h + 2 , r - 1}
    /// direction2 -> {h + 2 , r + 1}
    /// direction3 -> {h + 1 , r - 2}
    /// direction4 -> {h + 1 , r + 2}
    /// direction5 -> {h - 1 , r - 2}
    /// direction6 -> {h - 1 , r + 2}
    /// direction7 -> {h - 2 , r - 1}
    /// direction8 -> {h - 2 , r + 1}
    /// h => { +2 , +2 , +1 , +1 , -1 , -1 , -2 , -2}
    /// r => { -1 , +1 , -2 , +2 , -2 , +2 , -1 , +1}

    queue<array<int, 3>> q;
    q.push({h, r, cnt});
    bool used[sz][sz];

    for (int i = 0; i < sz; ++i)
    {
        for (int j = 0; j < sz; ++j)
        {
            dp[i][j] = INF;
            used[i][j] = false;
        }
    }

    dp[h][r] = 0;
    used[h][r] = true;

    while (!q.empty())
    {
        auto f = q.front();
        q.pop();

        if (f[0] == toi && f[1] == toj)
        {
            cout << "To get from " << x << " to " << y << " takes " << dp[toi][toj] << " knight moves.\n";
            return;
        }

        int num1 = f[0], num2 = f[1];
        for (int i = 0; i < 8; ++i)
        {
            if (num1 + dh[i] >= 1 && num1 + dh[i] <= 8 && num2 + dr[i] >= 1 && num2 + dr[i] <= 8 && !used[num1 + dh[i]][num2 + dr[i]])
            {
                used[num1 + dh[i]][num2 + dr[i]] = true;
                if (dp[num1 + dh[i]][num2 + dr[i]] > f[2] + 1)
                {
                    dp[num1 + dh[i]][num2 + dr[i]] = f[2] + 1;
                }
                q.push({num1 + dh[i], num2 + dr[i], f[2] + 1});
            }
        }
    }
}

void sieve()
{
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;
    mp['d'] = 4;
    mp['e'] = 5;
    mp['f'] = 6;
    mp['g'] = 7;
    mp['h'] = 8;
}

void solve()
{
    while (cin >> x >> y)
    {
        i = mp[x[0]], j = x[1] - '0', toi = mp[y[0]], toj = y[1] - '0';
        int cnt = 0;
        BFS(i, j, cnt);
    }
}

signed main()
{
    Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    sieve();

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
