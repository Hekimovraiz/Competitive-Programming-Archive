/*
 * Problem: 1676B - Equal Candies
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1676/problem/B
 */

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
 
#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    int n ; cin >> n;
    int sum = 0;
    vector<int> v(n);
    v_i{
        cin >> v[i];
    }
    int mn = *min_element(all);
    v_i
    {
        if(v[i] != mn)
        {
            sum += v[i] - mn;
        }
    }
 
    cout << sum << "
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