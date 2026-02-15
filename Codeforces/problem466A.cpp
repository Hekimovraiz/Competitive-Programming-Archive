/*
 * Problem: 466A - Cheap Travel
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/466/A
 */

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
    int n , m , a , b;
    cin >> n >> m >> a >> b;
    int k1 = n * a;
    int k2 = ((n + m - 1) / m) * b;
    int k3 = (n / m) * b + (n % m) * a;
    cout << min({k1 , k2 , k3}) << "\n";

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