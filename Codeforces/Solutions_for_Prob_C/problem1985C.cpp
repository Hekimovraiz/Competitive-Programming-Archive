/*
 * Problem: 1985C - Good Prefixes
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1985/C
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


void solve()
{
    int n ;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    int sum = 0, res = 0;
    set<int> st;
    for (int i = 0; i < n; ++i)
    {
        st.insert(v[i]);
        sum += v[i];
        if (sum % 2 == 0 && st.count(sum / 2))
        {
            ++res;
        }
    }
    cout << res << '\n';
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