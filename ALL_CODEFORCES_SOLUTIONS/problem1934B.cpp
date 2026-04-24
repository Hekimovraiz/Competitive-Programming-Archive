// Problem ID: 1934B
// Platform: Codeforces
// Link: https://codeforces.com/contest/1934/problem/B

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
/*
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
*/
 
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
 
const int sz = 1e6 + 4;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz], n;
 
void sieve()
{
    for (int i = 1; i < sz; ++i)
    {
        dp[i] = INF;
    }
    vector<int> coins = {1, 3, 6, 10, 15};
    for (auto x : coins)
    {
        dp[x] = 1;
    }
 
    for (int i = 2; i < sz; ++i)
    {
        for (auto coin : coins)
        {
            if (i - coin >= 0)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
}
 
void solve()
{
    cin >> n;
    if (n > 1e6)
    {
        int diff = (n - 1e6 + 14) / 15;
        if (n - diff * 15 < 0)
        {
            n = 0LL;
        }
        else
        {
            n = n - diff * 15;
        }
        cout << diff + dp[n] << '
';
    }
    else
    {
        cout << dp[n] << "
";
    }
}
 
signed main()
{
    sieve();
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
 
/*
 
*/