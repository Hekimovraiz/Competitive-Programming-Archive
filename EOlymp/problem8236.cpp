/*
 * Problem: 8236
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8236
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

bool cmp(int &k, int &f)
{
    if (k % 2 != 0 && f % 2 != 0)
    {
        return k < f;
    }

    if (k % 2 == 0 && f % 2 == 0)
    {
        return k > f;
    }

    if (k % 2 != 0 && f % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(all(v), cmp);
    for (int i = 0; i < (int)v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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
