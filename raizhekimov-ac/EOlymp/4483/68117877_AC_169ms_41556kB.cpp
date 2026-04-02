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

struct Node
{
    int mn1, mn2;
};

int n, k, q, qx, ql, qr, a[sz];
Node t[sz << 2];

struct SegmentTree
{
    Node merge(const Node &l, const Node &r)
    {
        if (l.mn1 < r.mn1)
        {
            return {l.mn1, min(l.mn2, r.mn1)};
        }
        return {r.mn1, min(l.mn1, r.mn2)};
    }

    void build(int node, int l, int r)
    {
        if (l == r)
        {
            t[node] = {a[l], INF};
            return;
        }
        int mid = (l + r) >> 1;
        build(node << 1, l, mid);
        build(node << 1 | 1, mid + 1, r);
        t[node] = merge(t[node << 1], t[node << 1 | 1]);
    }

    Node get(int node, int l, int r, int ql, int qr)
    {
        if (l > qr || r < ql)
        {
            return {INF, INF};
        }
        if (ql <= l && r <= qr)
        {
            return t[node];
        }
        int mid = (l + r) >> 1;
        return merge(get(node << 1, l, mid, ql, qr), get(node << 1 | 1, mid + 1, r, ql, qr));
    }

    void update(int node, int l, int r, int pos, int val)
    {
        if (l == r)
        {
            t[node] = {val, INF};
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
        t[node] = merge(t[node << 1], t[node << 1 | 1]);
    }
};

void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    SegmentTree st;
    st.build(1, 1, n);
    cin >> q;
    while (q--)
    {
        cin >> qx >> ql >> qr;
        if (qx == 1)
        {
            Node res = st.get(1, 1, n, ql, qr);
            cout << (res.mn1 + res.mn2 <= k ? "Yes\n" : "No\n");
        }
        else
        {
            st.update(1, 1, n, ql, qr);
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