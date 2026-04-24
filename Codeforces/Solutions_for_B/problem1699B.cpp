/*
 * Problem: 1699B - Almost Ternary Matrix
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1699/problem/B
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
 
const int sz = 1e5 + 31; // hmm... RunTime error?
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;
vector<int> dx = {1, -1, 0, 0}, dy = {0, 0, -1, 1};
int a[4][4] = {
    {1, 0, 0, 1},
    {0, 1, 1, 0},
    {0, 1, 1, 0},
    {1, 0, 0, 1}};
 
// variables:
int n, m;
 
void solve()
{
    cin >> n >> m;
    /*
    vector<vector<int>> v(n + 1, vector<int>(m + 1));
    bool used[n + 31][m + 31];
    v[1][1] = 1;
 
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            set<int> st;
            for (int x = 0; x < 4; ++x)
            {
                if (dx[x] + i >= 1 && dx[x] + i <= n && dy[x] + j >= 1 && dy[x] + j <= m && !used[dx[x] + i][dy[x] + j])
                {
                    used[dx[x] + i][dy[x] + j] = true;
                    if (st.empty())
                    {
                        st.insert((v[i][j] == 0 ? 1 : 0));
                    }
                    else
                    {
                        if (st.size() >= 1)
                        {
                            st.insert((*st.begin() == 1 ? 0 : 1));
                        }
                    }
                    v[dx[x] + i][dy[x] + j] = *st.begin();
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cout << v[i][j] << " 
"[j == m];
        }
    }
    */
   /*
   for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 1)
        {
            cout << 1 << " ";
            for (int j = 2; j <= m - 1; ++j)
            {
                cout << 0 << " ";
            }
            cout << 1 << "
";
        }
        else
        {
            cout << 0 << " ";
            for (int j = 2; j <= m - 1; ++j)
            {
                cout << 1 << " ";
            }
            cout << 0 << "
";
        }
    }
   */
 
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << a[i % 4 + 0][j % 4 + 0] << " 
"[j == m - 1];
        }
    }
}
 
signed main()
{
    __Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    // sieve();
 
    int t = 1;
    cin >> t;
 
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