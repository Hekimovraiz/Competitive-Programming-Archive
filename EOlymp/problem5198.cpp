/*
 * Problem: 5198
 * Platform: EOlymp
 * Link: https://www.eolymp.com/en/problems/5198
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define ll long long
#define str string

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 1e6;
bool isPrime[sz];
vector<int> v;

void sieve()
{
    for (int i = 0; i < sz; ++i)
    {
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < sz; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < sz; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i < sz; ++i)
    {
        if (isPrime[i])
        {
            v.push_back(i);
        }
    }
}

void solve()
{
    int x , n , m; cin >>  x >> n >> m;
    int k = pow(x , n);
    cout << k % m << "\n";
}

signed main()
{
    Lek_Raiz;
    /// sieve();
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}