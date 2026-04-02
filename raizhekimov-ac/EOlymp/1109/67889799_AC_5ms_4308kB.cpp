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

const int sz = 4e5 + 31; // hmm... RunTime error?
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;

/// variables:
int i, j, k, n, m;
vector<pair<int, double>> v[sz];
vector<double> dp(sz);

void DIJKSTRA()
{
    for (int i = 1; i <= n; ++i)
    {
        dp[i] = 0.0;
    }

    dp[1] = 1.0;
    multiset<pair<double, int>> st;
    st.insert({1.0, 1});

    while (!st.empty())
    {
        auto it = st.begin();
        double w = it->first;
        int node = it->second;
        st.erase(it);

        if (dp[node] != w)
        {
            continue;
        }

        for (auto to : v[node])
        {
            if (dp[to.first] < dp[node] * to.second)
            {
                dp[to.first] = dp[node] * to.second;
                st.insert({dp[to.first], to.first});
            }
        }
    }
}

void solve()
{
    cin >> n >> m;

    while (m--)
    {
        cin >> i >> j >> k;
        v[i].pb({j, k * 1.0 / 100});
        v[j].pb({i, k * 1.0 / 100});
    }

    DIJKSTRA();

    cout << fixed << setprecision(6) << dp[n] * 100 << " percent\n";
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