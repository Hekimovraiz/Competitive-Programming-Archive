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
    int n, a, b, c, cavab = 0;
    cin >> n >> a >> b >> c;
    for (int x = 0; x <= 4000; ++x) /// A
    {
        for (int y = 0; y <= 4000; ++y) /// B
        {
            if (((n - x * a - y * b) >= 0) && (n - x * a - y * b) % c == 0)
            {
                int z = (n - x * a - y * b) / c; /// C
                cavab = max(cavab, x + y + z);
            }
        }
    }
    cout << cavab << '\n';
}

signed main()
{
    Lek_Raiz
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}