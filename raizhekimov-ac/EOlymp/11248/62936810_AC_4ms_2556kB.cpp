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

const int sz = 1e6 + 2;
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
    int b, c;
    cin >> b >> c;
    int cnt = 0;
    int t = 0;

    int k = (int)(upper_bound(v.begin(), v.end(), b) - v.begin()) - 1;

    for (int i = 0; i < (int)v.size(); ++i)
    {
        if (v[i] == v[k])
        {
            for (int j = i; j > 0; --j)
            {
                ++cnt;
                if (cnt == c)
                {
                    t = v[j];
                    break;
                }
            }
            break;
        }
    }

    cout << t << "\n";
}

signed main()
{
    Lek_Raiz;
    sieve();
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}