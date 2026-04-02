/*
 * Problem: 1360B - Honest Coach
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1360/B
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
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    
    sort(v.begin(), v.end());

    int cvb = LLONG_MAX;
    for (int i = 1; i < n; ++i)
    {
        cvb = min(cvb, abs(v[i] - v[i - 1]));
    }

    cout << cvb << "\n";
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