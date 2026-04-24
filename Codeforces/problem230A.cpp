#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;
 
 
void solve()
{
    int s, n;
    cin >> s >> n;
    map<int, int> mp;
 
    while (n--)
    {
        int xi, yi;
        cin >> xi >> yi;
        mp[xi] += yi; 
    }
 
    for (auto [k, m] : mp)
    {
        if (s > k)
        {
            s += m;
        }
        else
        {
            cout << "NO
";
            return;
        }
    }
 
    cout << "YES
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
 