/*
 * Problem: 1905
 * Platform: EOlymp
 * Link: https://www.eolymp.com/en/problems/1905
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

bool isPrime(int x)
{
    if(x <= 1)
    {
        return false;
    }
    if(x == 2)
    {
        return true;
    }
    if(x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }

    for(int i = 5 ; i * i <= x ; i += 6)
    {
        if(x % i == 0 || x % (i + 2) == 0)
        {
            return false;
        }
    } 
    return true;
}

int fact(int n)
{
    if(isPrime(n))
    {
        return 1;
    }
    map<int, int> mp;
    int ans = INF;

    int k = 2;
    while (n > 1)
    {
        while (n % k == 0)
        {
            ++mp[k];
            n /= k;
        }
        ans = min(ans, mp[k]);
        if(isPrime(n))
        {
            return 1;
        }
        ++k;
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;
    cout << fact(n) << "\n";
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