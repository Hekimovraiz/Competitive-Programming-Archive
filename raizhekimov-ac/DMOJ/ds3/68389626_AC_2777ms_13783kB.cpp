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
struct NODE
{
    int min_el, gcd, beraber_el;
};
int n, qr, a[sz];
NODE t[sz << 2];

struct Segment_Tree
{
    void build(int node, int l, int r)
    {
        if (l == r)
        {
            t[node] = {a[l], a[l], 1};
            return;
        }
        int mid = (l + r) >> 1;
        build(node << 1, l, mid);
        build(node << 1 | 1, mid + 1, r);

        t[node].min_el = min(t[node << 1].min_el, t[node << 1 | 1].min_el);
        t[node].gcd = __gcd(t[node << 1].gcd, t[node << 1 | 1].gcd);
        t[node].beraber_el = 0;
        if (t[node << 1].gcd == t[node].gcd)
        {
            t[node].beraber_el += t[node << 1].beraber_el;
        }
        if (t[node << 1 | 1].gcd == t[node].gcd)
        {
            t[node].beraber_el += t[node << 1 | 1].beraber_el;
        }
    }

    void update(int node, int l, int r, int pos, int val)
    {
        if (l == r)
        {
            t[node] = {val, val, 1};
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

        t[node].min_el = min(t[node << 1].min_el, t[node << 1 | 1].min_el);
        t[node].gcd = __gcd(t[node << 1].gcd, t[node << 1 | 1].gcd);
        t[node].beraber_el = 0;
        if (t[node << 1].gcd == t[node].gcd)
        {
            t[node].beraber_el += t[node << 1].beraber_el;
        }
        if (t[node << 1 | 1].gcd == t[node].gcd)
        {
            t[node].beraber_el += t[node << 1 | 1].beraber_el;
        }
    }

    NODE get(int node, int l, int r, int ql, int qr)
    {
        if (qr < l || ql > r)
        {
            return {INF, 0, 0};
        }
        if (ql <= l && r <= qr)
        {
            return t[node];
        }

        int mid = (l + r) >> 1;
        NODE left = get(node << 1, l, mid, ql, qr), right = get(node << 1 | 1, mid + 1, r, ql, qr);

        if (left.min_el == INF)
        {
            return right;
        }
        if (right.min_el == INF)
        {
            return left;
        }
        return {min(left.min_el, right.min_el), __gcd(left.gcd, right.gcd), (left.gcd == __gcd(left.gcd, right.gcd) ? left.beraber_el : 0) + (right.gcd == __gcd(left.gcd, right.gcd) ? right.beraber_el : 0)};
    }
};

void solve()
{
    cin >> n >> qr;
    Segment_Tree st;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    st.build(1, 1, n);
    while (qr--)
    {
        str x;
        cin >> x;
        if (x == "C")
        {
            int l, r;
            cin >> l >> r;
            st.update(1, 1, n, l, r);
        }
        else if (x == "M")
        {
            int l, r;
            cin >> l >> r;
            cout << st.get(1, 1, n, l, r).min_el << "\n";
        }
        else if (x == "G")
        {
            int l, r;
            cin >> l >> r;
            cout << st.get(1, 1, n, l, r).gcd << "\n";
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << st.get(1, 1, n, l, r).beraber_el << "\n";
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
//
