/*
 * Problem: 490A - Team Olympiad
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/490/problem/A
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
    int n;
    cin >> n;
    vector<int> k1, k2, k3;
    
    for(int i = 0 ; i < n ; ++i)
    {
        int x; cin >> x;
        if(x == 1)
            k1.push_back(i + 1);
        else if(x == 2)
            k2.push_back(i + 1);
        else
            k3.push_back(i + 1);
    }
 
    int max_team = min({(int)k1.size(), (int)k2.size(), (int)k3.size()});
    cout << max_team << "
";
 
    for(int i = 0 ; i < max_team ; ++i)
    {
        cout << k1[i] << " " << k2[i] << " " << k3[i] << "
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
 