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

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < 0)
    {
        a = -a;
        b = -b;
        c = -c;
        d = -d;
    }
    double l = -1e18, r = 1e18, mid, best = 0;

    for (int i = 1; i <= 10000; ++i)
    {
        mid = (l + r) / 2;
        if (a * pow(mid, 3) + b * pow(mid, 2) + c * mid + d >= 0)
        {
            best = mid;
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    cout << fixed << setprecision(10) << best << '\n';
}


signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}
