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
    for(auto &i : v)
    {
        cin >> i;
    }
    int mx = 0;
    if(n == 1 && v[0] == 0)
    {
        cout << 1 << "
";
        return;
    }
    if(n == 1 && v[0] == 1)
    {
        cout << 0 << "
"; 
        return;
    }
    for(int i = 0 ; i < n ; ++i)
    {
        if(v[i] == 0)
        {
            int cnt = 0;
            while(i < n && v[i] == 0) 
            {
                ++cnt;
                ++i;
            }
            if(cnt > mx)
            {
                mx = cnt;
            }
        }
    }
 
    cout << mx << "
";
}
 
signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}