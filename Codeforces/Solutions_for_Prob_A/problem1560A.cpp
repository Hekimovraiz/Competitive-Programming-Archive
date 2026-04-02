/*
 * Problem: 1560A - Dislike of Threes
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1560/A
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
    vector<int> v;
    int k = 1;
    for (int i = 0; i < 1001; )
    {
        if (k % 3 == 0 || k % 10 == 3)
        {
            k++; 
            continue;
        }
        v.push_back(k);
        k++;
        i++;
    }
    cout << v[n - 1] << "\n";
}

signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
