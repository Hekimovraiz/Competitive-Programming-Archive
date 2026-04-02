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

const int sz = 1e7 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

bool isPrime[sz];
vector<int> primes;

void sieve()
{
    for (int i = 2; i < sz; ++i)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < sz; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < sz; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < sz; ++i)
    {
        if (isPrime[i])
        {
            primes.pb(i);
        }
    }
}

int wheel_fact(int n)
{
    set<int> st;
    for (int i = 2; i <= 5; ++i)
    {
        while (n % i == 0)
        {
            st.insert(i);
            n /= i;
        }
    }
    array<int, 8> inc = {4, 2, 4, 2, 4, 6, 2, 6};
    int d = 0;
    for (int i = 7; i * i <= n; i += inc[d++])
    {
        if (d == 8)
        {
            d = 0;
        }
        while (n % i == 0)
        {
            n /= i;
            st.insert(i);
        }
    }
    if (n > 1)
    {
        st.insert(n);
    }
    return size(st);
}

void solve()
{
    int n;
    cin >> n;
    cout << (wheel_fact(n) == 2 ? "YES\n" : "NO\n");
}

signed main()
{
    sieve();
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}