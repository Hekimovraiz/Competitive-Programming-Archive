/*
 * Problem: 1950A - Stair, Peak, or Neither?
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1950/A
 */

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define int long long
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;
*/

void solve()
{
    int a , b , c; cin >> a >> b >> c;
    if(a < b && b < c)
    {
        cout << "STAIR\n";
    }
    else if(a < b && b > c)
    {
        cout << "PEAK\n";
    }
    else
    {
        cout << "NONE\n";
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


