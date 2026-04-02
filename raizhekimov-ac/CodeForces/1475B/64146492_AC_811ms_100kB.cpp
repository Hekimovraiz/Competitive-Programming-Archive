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

const int sz = 1e3 + 1;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz], a[sz];

void solve()
{
    int n;
    cin >> n;
    for (int x = 0; x <= 1000; ++x)
    {
        for (int y = 0; y <= 1000; ++y)
        {
            if (2020 * x + 2021 * y > n)
            {
                break;
            }
            if (2020 * x + 2021 * y == n)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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
