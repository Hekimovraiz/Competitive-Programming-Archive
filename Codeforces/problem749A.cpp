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
    int n ; cin >> n;
    int  cnt = 0;
    cout << n / 2 << "
";
 
    if(n % 2 == 0)
    {
        for(int i = 0 ; i < n / 2 ; ++i)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        for(int i = 0 ; i < (n - 3) / 2; ++i)
        {
            cout << 2 << " ";
        }
        cout << 3 << "
";
    }
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