#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve()
{
    int n ; cin >> n;
    vector<int> v(n);
    map<int , int> mp;
    for(auto &i : v)
    {
        cin >> i;
    }
    for(int i = 0 ; i < n ; ++i)
    {
        mp[v[i]]++;
        if(mp[v[i]] == 3)
        {
            cout << v[i] << "
";
            return;
        }
    }
    cout << -1 << "
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