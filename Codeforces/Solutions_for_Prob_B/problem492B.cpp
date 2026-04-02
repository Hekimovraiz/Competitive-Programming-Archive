/*
 * Problem: 492B - Vanya and Lanterns
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/492/B
 */

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
    int n , k ; cin >> n >> k;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }

    sort(v.begin() , v.end());
    double max = 0;

    if(v[0] != 0)
    {
        max = v[0];
    }
    if(v[n - 1] != 15)
    {
        if(max < k - v[n - 1])
        {
            max = k - v[n - 1];
        }
    }

    for(int i = 0 ; i < n - 1 ; ++i)
    {
        if((v[i + 1] - v[i]) / 2.0 > max)
        {
            max = (v[i + 1] - v[i]) / 2.0;
        }
    }

    cout << fixed << setprecision(10) << max << "\n";
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