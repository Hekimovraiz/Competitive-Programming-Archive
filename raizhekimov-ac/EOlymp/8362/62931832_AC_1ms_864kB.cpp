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

const int sz = 40000 + 3;
bool isPrime[sz];

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
}

void solve()
{
    int n;
    cin >> n;

    int k = 0;
    for (int i = 1; i <= 40; ++i)
    {
        if ((1LL << i) <= n)
        {
            k = i;
        }
        else
        {
            break;
        }
    }
    if ((1LL << (k - 1)) * 3 <= n)
    {
        cout << max((1LL << k), ((1LL << (k - 1)) * 3)) << '\n';
        return;
    }
    cout << (1LL << k) << '\n';
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
