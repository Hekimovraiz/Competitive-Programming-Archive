// Problem ID: 279B
// Platform: Codeforces
// Link: https://codeforces.com/contest/279/problem/B

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
    vector<int> a(n + 1);
    vector<int> q(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        q[i] = q[i - 1] + a[i];
    }
    int cvb = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + cvb; j <= n; ++j)
        {
            if (q[j] - q[i - 1] <= k)
            {
                cvb = max(cvb, j - i + 1);
            }
            else
            {
                break;
            }
        }
    }
    cout << cvb << '
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