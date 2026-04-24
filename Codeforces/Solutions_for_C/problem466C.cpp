// Problem ID: 466C
// Platform: Codeforces
// Link: https://codeforces.com/contest/466/problem/C

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
 
const int sz = 1e5 + 31;
const int LOG = 63;
const int MOD = 1000003;
const int INF = 1e18;
 
// variables :
int n;
vector<int> a, pref, suf, idxs1, idxs2;
 
bool comp(int x, int y)
{
    return pref[x - 1] < pref[y - 1];
}
 
void solve()
{
    cin >> n;
    a.resize(n + 31), pref.resize(n + 31), suf.resize(n + 31);
 
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
 
    for (int i = n; i >= 1; --i)
    {
        suf[i] = suf[i + 1] + a[i];
    }
 
    if (n <= 2 || pref[n] % 3 != 0)
    {
        cout << 0 << "
";
        return;
    }
    int lst = -1;
 
    for (int i = 1; i <= n; ++i)
    {
        if (pref[i] == pref[n] / 3)
        {
            while (i <= n - 2 && pref[i] == pref[n] / 3)
            {
                idxs1.ep(i);
                lst = i;
                ++i;
            }
        }
    }
 
    if (lst == -1)
    {
        cout << 0 << "
";
        return;
    }
 
    for (int i = n; i >= 1; --i)
    {
        if (suf[i] == pref[n] / 3)
        {
            while (i > 2 && suf[i] == pref[n] / 3)
            {
                idxs2.ep(i);
                --i;
            }
        }
    }
 
    if (idxs1.empty() || idxs2.empty())
    {
        cout << 0 << "
";
        return;
    }
    
    int ans = 0;
    sort(all(idxs2));
    for (auto idx1 : idxs1)
    {
        auto it = lower_bound(all(idxs2), idx1 + 2);
        ans += idxs2.end() - it;
    }
 
    cout << ans << "
";
}
 
signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
 
/*
 
*/