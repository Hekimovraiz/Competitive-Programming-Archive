/*
 * Problem: 903C
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/903/problem/C
 */
#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define int long long
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace __gnu_pbds;
 
 
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
 
signed main()
{
    Lek_Raiz
    int n ; cin >> n;
    map<int , int> mp;
    int max_cnt = 0;
 
    for(int i = 0 ; i < n ; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
        max_cnt = max(max_cnt , mp[x]);
    }
 
    cout << max_cnt << "
";
}