/*
 * Problem: 1850B
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1850/problem/B
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define min(x) *min_element(x.begin() , x.end())
 
using namespace std;    
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
 
void solve()
{
    int n ; cin >> n;
    int max = 0 , s = 0;
    for(int i = 1; i <= n ; ++i)
    {
        int a , b ; cin >> a >> b;
        if(a <= 10)
        {
            if(max < b)
            {
                max = b;
                s = i;
            }
        }
    }
    cout << s << "
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
 