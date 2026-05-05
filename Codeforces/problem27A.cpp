/*
 * Problem: 27A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/27/problem/A
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
    int n; cin >> n;
    set<int> st;
    while(n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
 
    for(int i = 1 ; i <= *max_element(st.begin() , st.end()) + 1 ; ++i)
    {
        if(!st.count(i))
        {
            cout << i << "
";
            return;
        }
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
 