/*
 * Problem: 918B - Radio Station
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/918/B
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
    int n , m;
    cin >> n >> m;
    unordered_map<string , string> mp;
    
    while(n--) {
        string ip , s;
        cin >> s >> ip;
        mp[ip] = s;
    }
    
    while(m--) {
        string h , ip;
        cin >> h >> ip;
        ip.pop_back(); 
        cout << h << " " << ip << "; #" << mp[ip] << "\n";
    }
}