/*
 * Problem: 337A - Puzzles
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/337/A
 */

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &i : v)
    {
        cin >> i;
    }

    sort(v.begin(), v.end());

    long long k = LLONG_MAX;

    for (int i = 0; i <= m - n; ++i)
    {
        long long f = v[i + n - 1] - v[i];
        k = min(k, f);
    }

    cout << k << "\n";
}



signed main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}

