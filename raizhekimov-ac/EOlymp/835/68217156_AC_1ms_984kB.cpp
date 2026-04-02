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

// variables:

void solve()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    map<int, int> mp;
    ++mp[a];
    ++mp[b];
    ++mp[c];
    ++mp[d];
    ++mp[e];
    vector<int> cnts;
    for (auto [x, y] : mp)
    {
        cnts.pb(y);
    }
    sort(all(cnts));
    set<int> st = {a, b, c, d, e};
    vector<int> v = {a, b, c, d, e};
    sort(all(v));
    if ((int)st.size() == 1)
    {
        cout << "Impossible\n";
    }
    else if ((int)cnts.size() == 2 && cnts.back() == 4)
    {
        cout << "Four of a Kind\n";
    }
    else if ((int)cnts.size() == 2 && cnts[0] == 2 && cnts[1] == 3)
    {
        cout << "Full House\n";
    }
    else if ((int)cnts.size() == 5 && v[0] + 1 == v[1] && v[1] + 1 == v[2] && v[2] + 1 == v[3] && v[3] + 1 == v[4])
    {
        cout << "Straight\n";
    }
    else if ((int)cnts.size() > 1 && cnts.back() == 3)
    {
        cout << "Three of a Kind\n";
    }
    else if ((int)cnts.size() == 3 && count(all(cnts), 2) == 2)
    {
        cout << "Two Pairs\n";
    }
    else if ((int)cnts.size() > 1 && count(all(cnts), 2) > 0)
    {
        cout << "One Pair\n";
    }
    else
    {
        cout << "Nothing\n";
    }
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