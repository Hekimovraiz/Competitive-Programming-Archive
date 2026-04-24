/*
 * Problem: 32B - Borze
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/32/problem/B
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
    string s ; cin >> s;
    string k ="";
    for(int i = 0 ; i < (int) s.size() ; ++i)
    {
        if(s[i] == '.')
        {
            k += '0';
        }
        else if(s[i] == '-' && s[i + 1] == '.' )
        {
            k += '1';
            i += 1;
        }
        else if(s[i] == '-' && s[i + 1] == '-')
        {
            k += '2';
            i += 1;
        }
    }
    cout << k << "
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