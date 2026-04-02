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
#define pf push_front
#define ep emplace_back
#define pii pair<int, int>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 1e3 + 3;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    // mence cavab hemishe ya 1 olacaq ya da 2
    int a, b, c;
    cin >> a >> b >> c;
    int mid = ((a + b + c) - (max({a, b, c}) + min({a, b, c})));
    int maxn = max({a, b, c});
    int minn = min({a, b, c});

    int min_way = 0, max_way = 0;
    if (minn == maxn - 2)
    {
        min_way = 0;
    }
    else if ((mid == maxn - 2) || (minn == mid - 2))
    {
        min_way = 1;
    }
    else
    {
        min_way = 2;
    }

    max_way = max(maxn - mid, mid - minn) - 1;
    cout << min_way << "\n"
         << max_way << "\n";
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