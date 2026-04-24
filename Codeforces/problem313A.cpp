/*
 * Problem: 313A - Ilya and Bank Account
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/313/problem/A
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
    int n ; cin >> n;
    if(n > 0)
    {
        cout << n << "
";
    }
    else
    {
        string s = to_string(n);
        string k = s.substr(0 , (int) s.size() - 1);
        string f = s.substr(0 , (int) s.size() - 2) + s.back();
        cout << max(stoll(k) , stoll(f)) << "
";
    }
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