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

const int sz = 1e5 + 5;
bool isPrime[sz];

void cnt(int l, int r)
{
    vector<char> isPrime(r - l + 1, true);
    for (int i = 2; i * i <= r; ++i)
    {
        for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i)
        {
            isPrime[j - l] = false;
        }
    }
    if (l == 1 || l == 0)
    {
        isPrime[0] = false;
        isPrime[1] = false;
    }
    cout << count(all(isPrime), true) << '\n';
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int l , r ; cin >> l >> r;
        cnt(l , r);
    }
}