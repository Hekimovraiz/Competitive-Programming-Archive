// Problem ID: 9A
// Platform: Codeforces
// Link: https://codeforces.com/contest/9/problem/A

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
    int x , y;
    cin >> x >> y;
    int k = 6 - (max(x , y)) + 1, s = 6;
    if(k == 6)
    {
        cout << "1/1
";
    }
    else if(k == 0)
    {
        cout << "0/1
";
    }
    else
    {
        int f = gcd(k , s);
        k = k / f;
        s = s / f;
        cout << k << "/" << s << "
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