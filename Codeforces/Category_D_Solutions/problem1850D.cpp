/*
 * Problem: 1850D - Balanced Round
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1850/D
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define min(x) *min_element(x.begin() , x.end())

using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    sort(a.begin(), a.end());

    int max_len = 1, len = 1;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] - a[i - 1] <= k)
        {
            ++len;
        } 
        else 
        {
            len = 1;
        }
        max_len = max(max_len, len);
    }

    cout << n - max_len << '\n';
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

