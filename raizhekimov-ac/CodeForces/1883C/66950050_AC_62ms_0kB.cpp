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
#define size(x) (int)x.size()

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 1e6 + 2;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = 0, b = 0, c = 0, d = 0, e = 50, flag = 0;
    if (k != 4)
    {
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % k == 0)
            {
                flag = 1;
            }
            else
            {
                a = arr[i] % k;
                b = k - a;
                e = min(e, b);
            }
        }
        if (flag == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << e << endl;
        }
    }
    else
    {
        a = 0, b = 0, c = 0, flag = 0, e = 1e6;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % k == 0)
            {
                flag = 1;
            }
            else
            {
                a = arr[i] % k;
                b = k - a;
                e = min(e, b);
            }
        }
        a = 0, b = 0, c = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % k == 0)
            {
                flag = 1;
            }
            else if (arr[i] % 2 == 0)
            {
                ++a;
            }
            else
            {
                ++b;
            }
        }
        if (a >= 2 || flag == 1)
        {
            cout << "0" << endl;
        }
        else if (a == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << min((int)e, 2ll) << endl;
        }
    }
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}