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

vector<int> primes;

void sieve(int N = 1000000)///OHAA ChatGPT ile 6-7'ci cehdde 100'ledim xD
{
    vector<bool> is_prime(N + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    int ans = 1;

    int s[] = {2, 3, 5};
    for (int p : s)
    {
        if (n % p == 0)
        {
            int cnt = 0;
            while (n % p == 0)
            {
                if (p == 2)
                {
                    n >>= 1;
                }
                else
                {
                    n /= p;
                }
                ++cnt;
            }
            ans *= (2 * cnt + 1);
        }
    }

    for (int p : primes)
    {
        if (p <= 5)
        {
            continue;
        }
        if (p * p > n)
        {
            break;
        }
        if (n % p == 0)
        {
            int cnt = 0;
            while (n % p == 0)
            {
                n /= p;
                ++cnt;
            }
            ans *= (2 * cnt + 1);
        }
    }

    int w[] = {1, 7, 11, 13, 17, 19, 23, 29};
    long long i = 31;
    while (i * i <= n)
    {
        for (int o : w)
        {
            int j = i + o - 1;
            if (j * j > n)
            {
                break;
            }
            if (n % j == 0)
            {
                int cnt = 0;
                while (n % j == 0)
                {
                    n /= j;
                    ++cnt;
                }
                ans *= (2 * cnt + 1);
            }
            if (n == 1)
            {
                break;
            }
        }
        if (n == 1)
        {
            break;
        }
        i += 30;
    }

    if (n > 1)
    {
        ans *= 3;
    }
    cout << ans << "\n";
}


signed main()
{
    sieve();
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}