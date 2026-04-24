// Problem ID: 1921A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1921/problem/A

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
    map<int , vector<int> > mp;
    int n = 4;
    while(n--)
    {
        int x , y ; cin >> x >> y;
        mp[x].push_back(y);
    }
    int x = 0 , y = 0;
    for(auto [s , k] : mp)
    {
        if(x == 0)
        {
            x = abs(k[0] - k[1]);
        }
        else
        {
            y = abs(k[0] - k[1]);
        }
    }
    cout << x * y << "
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
 