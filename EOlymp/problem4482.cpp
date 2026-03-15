/*
 * Problem: 4482
 * Platform: EOlymp
 * Link: https://www.eolymp.com/en/problems/4482
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

const int sz = 1e6 + 31; // hmm... RunTime error?
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;

// variables:
int n, qr;
int a[sz], t[sz << 2], mx[sz << 2], mn[sz << 2];

struct Segment_Tree
{
    void build(int node, int l, int r)
    {
        if (l == r)
        {
            mx[node] = a[l];
            mn[node] = a[l];
            return;
        }

        int mid = (l + r) >> 1;

        build(node << 1, l, mid);
        build(node << 1 | 1, mid + 1, r);

        mn[node] = min(mn[node << 1], mn[node << 1 | 1]);
        mx[node] = max(mx[node << 1], mx[node << 1 | 1]);
    }

    int getmn(int node, int l, int r, int ql, int qr)
    {
        if (l > qr || ql > r)
        {
            return INF;
        }
        if (ql <= l && r <= qr)
        {
            return mn[node];
        }

        int mid = (l + r) >> 1;

        return min(getmn(node << 1, l, mid, ql, qr), getmn(node << 1 | 1, mid + 1, r, ql, qr));
    }
    int getmx(int node, int l, int r, int ql, int qr)
    {
        if (l > qr || ql > r)
        {
            return -INF;
        }
        if (ql <= l && r <= qr)
        {
            return mx[node];
        }

        int mid = (l + r) >> 1;
        return max(getmx(node << 1, l, mid, ql, qr), getmx(node << 1 | 1, mid + 1, r, ql, qr));
    }

    void update(int node, int l, int r, int pos, int val)
    {
        if (l == r)
        {
            mx[node] = val;
            mn[node] = val;
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
        mn[node] = min(mn[node << 1], mn[node << 1 | 1]);
        mx[node] = max(mx[node << 1], mx[node << 1 | 1]);
    }
};

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    Segment_Tree st;
    st.build(1, 1, n);

    cin >> qr;

    while (qr--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int l, r;
            cin >> l >> r;
            cout << (st.getmn(1, 1, n, l, r) == st.getmx(1, 1, n, l, r) ? "draw\n" : "wins\n");
        }
        else
        {
            int l, r;
            cin >> l >> r;
            st.update(1, 1, n, l, r);
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