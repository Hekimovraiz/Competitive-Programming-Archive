// Problem ID: 43A
// Platform: Codeforces
// Link: https://codeforces.com/contest/43/problem/A

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define int long long
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;
*/
 
void solve()
{
    int n ; cin >> n;
    map<string , int> mp;
    while(n--)
    {
        string a; cin >> a;
        mp[a]++;
    }
    string max = "";
    int maxx = 0;
    for(auto [f , l] : mp)
    {
        if(l > maxx)
        {
            max = f;
            maxx = l;
        }
    }
    cout << max << "
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
 