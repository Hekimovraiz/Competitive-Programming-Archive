#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define min(x) *min_element(x.begin() , x.end())

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
    int odd = 0 , even = 0;
    for(auto &i : v)
    {
        cin >> i;
        if(i % 2 == 0)
        {
            odd += i;
        }
        else
        {
            even += i;
        }
    }

    cout << (odd > even ? "YES\n" : "NO\n");


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

