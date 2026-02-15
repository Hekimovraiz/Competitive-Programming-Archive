/*
 * Problem: arc087_a
 * Platform: AtCoder
 * Link: https://atcoder.jp/contests/arc087/tasks/arc087_a
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
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }

    unordered_map<int , int> mp;

    for(int i = 0 ; i < n ; ++i)
    {
        mp[v[i]]++;
    }

    int sm = 0;

    for(auto &[num , cnt] : mp)
    {
        if(num > cnt)
        {
            sm += cnt;
        }
        else
        {
            sm += cnt - num;
        }
    }

    cout << sm << "\n";
    
}