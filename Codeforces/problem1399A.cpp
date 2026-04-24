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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    bool f = true;
    for (int i = 1; i < n; ++i)
    {
        f &= (abs(v[i] - v[i - 1]) <= 1);
    }
    cout << (f ? "YES" : "NO") << '
';
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