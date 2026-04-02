#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define ll long long
#define str string
#define pb push_back
#define ep emplace_back

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> v;
void f()
{
    for (int i = 0; i <= 64; ++i)
    {
        for (int j = 0; j <= 64; ++j)
        {
            double k = pow(2, i) * pow(3, j);
            if (k > 1e18)
            {
                continue;
            }
            v.pb((int)k);
        }
    }
    sort(all(v));
}

void solve()
{
    int l, r;
    while (cin >> l >> r)
    {
        cout << upper_bound(all(v), r) - lower_bound(all(v), l) << '\n';
    }
}

signed main()
{
    f();
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}