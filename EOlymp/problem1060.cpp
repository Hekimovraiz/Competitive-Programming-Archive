/*
 * Problem: 1060
 * Platform: EOlymp
 * Link: https://www.eolymp.com/en/problems/1060
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
/// #define size(x) (int)x.size()

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 40 + 31; // hmm... RunTime error?
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;

/// variables:
int n, startidxi, startidxj, endidxi, endidxj;
char a[sz][sz];
queue<pair<int, int>> q;
vector<vector<int>> dp(sz, vector<int>(sz));
vector<int> dr1 = {1, -1, 0, 0}, dr2 = {0, 0, -1, 1};

void BFS(int starti, int startj)
{
    q.push(make_pair(starti, startj));
    dp[starti][startj] = 0;

    while (!q.empty())
    {
        auto f = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            if (f.first + dr1[i] >= 1 && f.first + dr1[i] <= n && f.second + dr2[i] >= 1 && f.second + dr2[i] <= n) // inbound
            {
                if (a[f.first + dr1[i]][f.second + dr2[i]] == '.' || a[f.first + dr1[i]][f.second + dr2[i]] == 'X')
                {
                    if (dp[f.first + dr1[i]][f.second + dr2[i]] > dp[f.first][f.second] + 1)
                    {
                        dp[f.first + dr1[i]][f.second + dr2[i]] = dp[f.first][f.second] + 1;
                        q.push(make_pair(f.first + dr1[i], f.second + dr2[i]));
                    }
                }
            }
        }
    }
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == '@')
            {
                startidxi = i;
                startidxj = j;
            }
            if (a[i][j] == 'X')
            {
                endidxi = i;
                endidxj = j;
            }
            dp[i][j] = INF;
        }
    }

    BFS(startidxi, startidxj);

    if (dp[endidxi][endidxj] == INF)
    {
        cout << "N\n";
        return;
    }
    // cout << dp[endidxi][endidxj] << "\n";

    a[endidxi][endidxj] = '+';
    while (endidxi != startidxi || endidxj != startidxj)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (endidxi + dr1[i] < 1 || endidxi + dr1[i] > n || endidxj + dr2[i] < 1 || endidxj + dr2[i] > n)
            {
                continue;
            }
            if ((a[endidxi + dr1[i]][endidxj + dr2[i]] == '.' || a[endidxi + dr1[i]][endidxj + dr2[i]] == '@') && dp[endidxi + dr1[i]][endidxj + dr2[i]] == dp[endidxi][endidxj] - 1)
            {
                if (a[endidxi + dr1[i]][endidxj + dr2[i]] == '.')
                {
                    a[endidxi + dr1[i]][endidxj + dr2[i]] = '+';
                }
                endidxi = endidxi + dr1[i];
                endidxj = endidxj + dr2[i];
                break;
            }
        }
    }


    cout << "Y\n";
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << a[i][j];
        }
        cout << '\n';
    }
}

signed main()
{
    Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    /// sieve();

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
