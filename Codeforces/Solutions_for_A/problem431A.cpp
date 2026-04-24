/*
 * Problem: 431A - Black Square
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/431/problem/A
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
    int k1 , k2 , k3 , k4 , sum = 0; cin >> k1 >> k2 >> k3 >> k4;
    string s ; cin >> s;
    for(int i = 0 ; i < (int) s.size() ; ++i)
    {
        if(s[i] == '1')
        {
            sum += k1;
        }
        else if(s[i] == '2')
        {
            sum += k2;
        }
        else if(s[i] == '3')
        {
            sum += k3;
        }
        else
        {
            sum += k4;
        }
    }
    cout << sum << "
";
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