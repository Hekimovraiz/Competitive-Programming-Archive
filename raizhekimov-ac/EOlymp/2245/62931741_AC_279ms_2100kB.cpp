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

signed main()
{
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        sieve();
        vector<int> v;
        int m, n;
        cin >> m >> n;

        for (int i = 2; i <= n; ++i)
        {
            if (isPrime[i])
            {
                v.push_back(i);
            }
        }

        set<int> st;

        for (int i = 0; i < (int)v.size(); ++i)
        {
            for (int j = i ; j < (int)v.size(); ++j)
            {
                int sm = v[i] + v[j];

                if (sm <= n && m <= sm)
                {
                    st.insert(sm);
                }
            }
        }

        for (auto it : st)
        {
            cout << it << " ";
        }

        cout << "\n";
    }
}
