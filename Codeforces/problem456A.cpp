/*
 * Problem: 456A - Laptops
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/456/problem/A
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define all v.begin() , v.end()
#define v_i for(int i = 0 ; i < n ; ++i)
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> laptops(n);
 
    for(int i = 0; i < n; ++i)
    {
        cin >> laptops[i].first >> laptops[i].second;
    }
 
    sort(laptops.begin(), laptops.end());
 
    for(int i = 0; i < n - 1; ++i)
    {
        if(laptops[i].second > laptops[i + 1].second)
        {
            cout << "Happy Alex
";
            return;
        }
    }
 
    cout << "Poor Alex
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