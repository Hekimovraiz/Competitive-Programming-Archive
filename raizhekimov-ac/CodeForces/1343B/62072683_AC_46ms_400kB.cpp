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
    int n;
    cin >> n;
    if (n % 4 != 0)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    vector<int> v;
    int d = 2, cem = 0;
    for (int i = 1; i <= n / 2; ++i)
    {
        v.push_back(d);
        cem += d;
        d += 2;
    }
    d = 1;
    for (int i = 1; i <= n / 2 - 1; ++i)
    {
        v.push_back(d);
        cem -= d;
        d += 2;
    }
    v.push_back(cem);
    for (int i : v)
    {
        cout << i << ' ';
    }
    cout << endl;
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