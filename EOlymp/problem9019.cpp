/*
 * Problem: 9019
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/9019
 */

// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
/// #include "__Lek_Raiz.h"

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

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 10005;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int a, b, d , n;
    cin >> a >> b >> d >> n;
    int l = 1, r = 1e18, mid, best = -1;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (mid / a + mid / b + mid / d - mid / lcm(a, b) - mid / lcm(b , d) - mid / lcm (d , a) + mid / lcm(a , lcm(b , d)) >= n)
        {
            best = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << best << '\n';
}


signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}