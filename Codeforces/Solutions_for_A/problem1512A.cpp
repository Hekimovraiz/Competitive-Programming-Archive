// Problem ID: 1512A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1512/problem/A

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
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; ++i) 
    {
        cin >> a[i];
    }
 
    if(a[0] != a[1] && a[1] == a[2])
    {
        cout << "1
";
    }
    else
    {
        for(int i = 1 ; i < n ; ++i)
        {
            if(a[i] != a[0])
            {
                cout << i + 1 << "
";
                return;
            }
        }
    }
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
 
 