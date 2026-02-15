/*
 * Problem: 1742A - Sum
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1742/A
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
    int a , b , c; cin >> a >> b >> c;
    if((max({a , b , c}) == (a + b + c) - (max({a , b , c}))))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO\n";
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

