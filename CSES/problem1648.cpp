/*
 * Problem: 1648
 * Platform: CSES
 * Link: https://cses.fi/problemset/task/1648
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

const int sz = 2e5 + 31; // hmm... RunTime error?
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;

// variables:
int n, qr, type, l, r, u, v;
int a[sz], t[sz << 2];

struct Segment_Tree
{

    void build(int node, int l, int r)
    {
        if (l == r)
        {
            t[node] = a[l];
            return;
        }
        int mid = (l + r) >> 1;
        build(node << 1, l, mid);
        build(node << 1 | 1, mid + 1, r);
        t[node] = t[node << 1] + t[node << 1 | 1];
    }

    int get(int node, int l, int r, int ql, int qr)
    {
        if (ql > r || qr < l)
        {
            return 0;
        }
        if (ql <= l && qr >= r)
        {
            return t[node];
        }

        int mid = (l + r) >> 1;

        return get(node << 1, l, mid, ql, qr) + get(node << 1 | 1, mid + 1, r, ql, qr);
    }

    void update(int node, int l, int r, int pos, int val)
    {
        if (l == r)
        {
            t[node] = val;
            return;
        }

        int mid = (l + r) >> 1;
        if (pos <= mid)
        {
            update(node << 1, l, mid, pos, val);
        }
        else
        {
            update(node << 1 | 1, mid + 1, r, pos, val);
        }
        t[node] = t[node << 1] + t[node << 1 | 1];
    }
};

void solve()
{
    cin >> n >> qr;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    Segment_Tree st;
    st.build(1, 1, n);
    while (qr--)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> u >> v;
            st.update(1, 1, n, u, v);
        }
        else
        {
            cin >> l >> r;
            cout << st.get(1, 1, n, l, r) << "\n";
        }
    }
}

signed main()
{
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
