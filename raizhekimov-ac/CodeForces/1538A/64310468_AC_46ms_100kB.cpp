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

const int sz = 65;
const int MOD = 1000003;
const int INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    int max_el = LLONG_MIN, min_el = LLONG_MAX;
    int a[n + 1];
    int max_el_idx = 0, min_el_idx = 0;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] > max_el)
        {
            max_el = a[i];
            max_el_idx = i;
        }
        if (a[i] < min_el)
        {
            min_el = a[i];
            min_el_idx = i;
        }
    }

    int l_max = max(max_el_idx, min_el_idx);
    int r_max = max(n - max_el_idx + 1, n - min_el_idx + 1);
    int c1 = min_el_idx + (n - max_el_idx + 1);
    int c2 = max_el_idx + (n - min_el_idx + 1);
    
    cout << min({l_max, r_max, c1, c2}) << "\n";
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
