/*
 * Problem: 1933B
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1933/B
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

void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }

    int k = sum % 3;
    /// cout << "sum : " << sum << "\n";

    if (k == 0)
    {
        cout << 0 << "\n";
        return;
    }

    if (k == 1)
    {
        for (int i = 0; i < n; ++i)
        {
            if ((sum - v[i]) % 3 == 0)
            {
                cout << 1 << "\n";
                return;
            }
        }
        cout << 2 << "\n";
        return;
    }

    if (k == 2)
    {
        cout << 1 << '\n';
        return;
    }
}

signed main()
{
    Lek_Raiz;
    /* sieve() */
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}


