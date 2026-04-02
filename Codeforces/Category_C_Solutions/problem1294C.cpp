/*
 * Problem: 1294C
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1294/C
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

const int sz = 2e4 + 3;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            int f = n / i;
            int s = 0, k = 0;

            if (!isPrime(f))
            {
                for (int j = 2; j < f; ++j)
                {
                    if (f % j == 0 && i != j)
                    {
                        s = f / j;
                        k = f / (f / j);
                        if (s == k || s == i || i == k)
                        {
                            s = k = 0;
                        }
                        else
                        {
                            cout << "YES\n"
                                 << i << " " << s << " " << k << "\n";
                            return;
                        }
                    }
                }
            }
        }
    }
    cout << "NO\n";
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
