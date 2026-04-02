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

const int sz = 3e5 + 2;
const int MOD = 1000003;
const int INF = 1e18;
/// int a[sz], dp[sz] , k[sz];

void solve()
{
    int n, k;
    cin >> n >> k;
    string mn = "", mx = "";

    if (k > 9 * n || (n > 1 && k == 0))
    {
        cout << "-1 -1\n";
        return;
    }

    if (n == 1 && k == 0)
    {
        cout << "0 0\n";
        return;
    }

    int sum = k;
    while ((int)mx.size() < n)
    {
        int d = min(9LL, sum);
        mx += to_string(d);
        sum -= d;
    }

    sum = k;
    while ((int)mn.size() < n)
    {
        int l = n - (int)mn.size() - 1;
        int d = max(0LL, sum - 9 * l);
        if (mn.empty() && d == 0 && n > 1)
        {
            d = 1;
        }
        mn += to_string(d);
        sum -= d;
    }

    cout << mn << " " << mx << "\n";
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