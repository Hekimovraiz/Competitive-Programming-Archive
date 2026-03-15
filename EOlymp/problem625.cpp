/*
 * Problem: 625
 * Platform: EOlymp
 * Link: https://www.eolymp.com/en/problems/625
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

const int sz = 5000 + 31; // hmm... RunTime error?
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;

/// variables:
int n, m, start, finish, x, y, z;
vector<pair<int, int>> v[sz];
multiset<pair<int, int>> st;
vector<int> dp(sz), par(sz), ans;

void DIJKSTRA()
{
    st.insert({0, start});
    dp[start] = 0, par[start] = -1;

    while (!st.empty())
    {
        auto w = st.begin()->first, node = st.begin()->second;
        st.erase(st.begin());

        for (auto x : v[node])
        {
            if (dp[x.first] > dp[node] + x.second)
            {
                dp[x.first] = dp[node] + x.second;
                st.insert({dp[x.first], x.first});
                par[x.first] = node;
            }
        }
    }
}

void solve()
{
    cin >> n >> m >> start >> finish;

    for (int i = 1; i <= m; ++i)
    {
        cin >> x >> y >> z;
        v[x].pb({y, z});
        v[y].pb({x, z});
    }

    for (int i = 1; i <= n; ++i)
    {
        dp[i] = INF;
        par[i] = -1;
    }

    DIJKSTRA();

    if (dp[finish] == INF)
    {
        cout << -1 << "\n";
        return;
    }

    int node = finish;
    while (node != -1)
    {
        ans.pb(node);
        node = par[node];
    }
    reverse(all(ans));

    cout << dp[finish] << "\n";
    for (auto p : ans)
    {
        cout << p << " ";
    }
    cout << "\n";
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
//