/*
 * Problem: 1367B
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1367/problem/B
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int tek = 0, cut = 0, miss = 0;
    for (int &i : v)
    {
        cin >> i;
        tek += (i % 2 != 0);
        cut += (i % 2 == 0);
    }
    if (tek == n / 2 && cut == (n + 1) / 2)
    {
        for (int i = 0 ; i < n; ++i)
        {
            miss += (i % 2 != v[i] % 2);
        }
        cout << miss / 2 << '
';
    }
    else
    {
        cout << -1 << '
';
    }
}
 
 
signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}