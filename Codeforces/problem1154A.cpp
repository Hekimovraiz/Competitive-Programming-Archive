/*
 * Problem: 1154A - Restoring Three Numbers
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1154/problem/A
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
 
 
void slove()
{
    vector<int> v;
    for(int i = 0 ; i < 4 ; ++i)
    {
        int x ; cin >> x;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
 
    cout << v[3] - v[0] << " " << v[3] - v[1] << " " << v[3] - v[2] << "
";
}
 
 
 
signed main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;
    while(t--)
    {
        slove();
    }
}
 