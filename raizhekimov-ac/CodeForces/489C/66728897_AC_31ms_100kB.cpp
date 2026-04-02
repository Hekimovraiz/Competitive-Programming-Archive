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
    int m, s;
    cin >> m >> s;
    if (m == 1 && s > 9)
    {
        cout << "-1 -1\n";
        return;
    }
    if ((m != 1 && s == 0) || s > m * 9)
    {
        cout << "-1 -1\n";
        return;
    }
    string mx;
    int curr = s;
    for (int i = 1; i <= m; ++i)
    {
        if (curr < 10)
        {
            mx.push_back(curr + '0');
            curr = 0;
        }
        else
        {
            mx.push_back('9');
            curr -= 9;
        }
    }
    curr = s - 1;
    string mn(m, '0');
    mn[0] = '1';
    for (int i = m - 1; i >= 0; --i)
    {
        if (curr < 10)
        {
            mn[i] += curr;
            curr = 0;
        }
        else
        {
            mn[i] += 9;
            curr -= 9;
        }
    }
    cout << mn << ' ' << mx << '\n';
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