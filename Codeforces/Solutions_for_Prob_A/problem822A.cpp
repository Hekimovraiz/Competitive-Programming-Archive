/*
 * Problem: 822A
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/822/A
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

int fact(int x)
{
    int f = 1;
    for(int i = 1 ; i <= x ; ++i)
    {
        f *= i;
    }
    return f;
}

void solve()
{
    int a , b ; cin >> a >> b;
    cout << fact(min(a , b)) << "\n";
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}
