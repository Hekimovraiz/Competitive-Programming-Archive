// Problem ID: 500A
// Platform: Codeforces
// Link: https://codeforces.com/contest/500/problem/A

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
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i < n; ++i)
    {
        cin >> v[i];
    }
    set<int> st;
 
    int i = 1;
    while(i <= n)
    {
        if (st.count(i))
        {
            break;
        }
        st.insert(i);
        i += v[i];
    }
 
    cout << (st.count(k) ? "YES" : "NO") << '
';
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