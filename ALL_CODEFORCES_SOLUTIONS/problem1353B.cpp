/*
 * Problem: 1353B - Two Arrays And Swaps
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1353/problem/B
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
 
void solve()
{
    int n , k ; cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> b[i];
    }
    int sum = 0 ;
 
 
    if(*min_element(a.begin() , a.end()) >= *max_element(b.begin() , b.end()))
    {
        for(int i = 0 ; i < n ; ++i)
        {
        sum += a[i];
        }   
 
        cout << sum << "
";
        return;
    }   
    
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    int cnt = 0 ;
 
    for(int i = 0 ; i < n ; ++i)
    {
        if(cnt == k)
        {
            break;
        }
        if(a[i] < b.back())
        {
            swap(a[i] , b.back());
            b.pop_back();
            ++cnt;
        }
    }
 
    for(int i = 0 ; i < n ; ++i)
    {
        sum += a[i];
    }
 
    cout << sum << "
";
 
}
 
signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}