/*
 * Problem: 2009B - osu!mania
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2009/problem/B
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
 
 
void solve() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
 
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (v[i][j] == '#')
            {
                cout << j + 1 << " ";
                break;
            }
        }
    }
    cout << "
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