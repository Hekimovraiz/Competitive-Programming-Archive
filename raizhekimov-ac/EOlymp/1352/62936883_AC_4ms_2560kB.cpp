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
    int n ; cin >> n;
    int sum = 0;
    for(int i = 0 ; i < (int) v.size() ; ++i)
    {
        sum += v[i];
        if(sum % n == 0)
        {
            cout << i + 1 << "\n";
            break;
        }
    }
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