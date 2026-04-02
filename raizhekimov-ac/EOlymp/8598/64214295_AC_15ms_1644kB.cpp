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

const int sz = 1e5 + 1;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz], v[sz];
int n, a, b;

bool check(const int &mid)
{
    int t = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (v[i] - b * mid <= 0)
        {
            continue;
        }
        t += ((v[i] - b * mid + (a - b) - 1) / (a - b));
        if (t > mid)
        {
            return false;
        }
    }

    return t <= mid;
}

void solve()
{
    cin >> n >> a >> b;
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }

    int l = 1, r = 1e10, mid, best = 0;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (check(mid))
        {
            best = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << best << "\n";
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
