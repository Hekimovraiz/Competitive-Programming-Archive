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

/// variables:
struct SegmentTree
{
    int a[sz], t[sz * 4];

    void build(int node, int left, int right)
    {
        if (left == right)
        {
            t[node] = a[left];
            return;
        }
        int mid = (left + right) / 2;

        build(node * 2, left, mid);

        build(node * 2 + 1, mid + 1, right);

        t[node] = (t[node * 2] ^ t[node * 2 + 1]);
    }

    int get(int node, int left, int right, int ql, int qr)
    {
        if (right < ql || left > qr)
        {
            return 0;
        }
        if (ql <= left && right <= qr)
        {
            return t[node];
        }

        int mid = (left + right) / 2;

        return (get(node * 2, left, mid, ql, qr) ^ get(node * 2 + 1, mid + 1, right, ql, qr));
    }

    void update(int node, int left, int right, int pos, int val)
    {
        if (left == right)
        {
            t[node] = val;
            return;
        }

        int mid = (left + right) / 2;

        if (pos <= mid)
        {
            update(node * 2, left, mid, pos, val);
        }
        else
        {
            update(node * 2 + 1, mid + 1, right, pos, val);
        }

        t[node] = (t[node * 2] ^ t[node * 2 + 1]);
    }
};

void solve()
{
    int n, qr;
    cin >> n >> qr;
    SegmentTree st;

    for (int i = 1; i <= n; ++i)
    {
        cin >> st.a[i];
    }
    st.build(1, 1, n);
    /// check(st.a , st.t);

    while (qr--)
    {
        // int x;
        // cin >> x;
        // if (x == 1)
        //{
        //     int k, u;
        //     cin >> k >> u;
        //     st.a[k] ^= u;
        //    st.update(1, 1, n, k, st.a[k]);
        // }
        // else
        //{
        int l, r;
        cin >> l >> r;
        cout << st.get(1, 1, n, l, r) << "\n";
        //}
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