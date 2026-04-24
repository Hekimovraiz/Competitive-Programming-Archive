/*
 * Problem: 103055A - League of Legends
 * Platform: Codeforces
 * Link: https://codeforces.com/gym/103055/problem/A
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
    int n ; cin >> n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    } 
 
    int cnt = 0;
    int min = v[0];
    int max = v[0];
 
    for(int i = 1 ; i < n ; ++i)
    {
        if(max < v[i])
        {
            ++cnt;
            max = v[i];
        }
        else if(v[i] < min)
        {
            min = v[i];
            ++cnt;
        }
    }
    cout << cnt << "
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
 