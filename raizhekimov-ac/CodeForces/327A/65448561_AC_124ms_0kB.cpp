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

const int sz = 200 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int dpone[sz], dpzero[sz], a[sz];

void solve()
{
    dpone[0] = dpzero[0] = a[0] = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        dpone[i] = dpone[i - 1] + (a[i] == 1 ? 1 : 0);
        dpzero[i] = dpzero[i - 1] + (a[i] == 0 ? 1 : 0);
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; ++j)
        {
            int k = dpone[i - 1];
            k += (dpone[n] - dpone[j]);
            k += (dpzero[j] - dpzero[i - 1]);
            /// cout << " i: " << i << " j: " << j << " dpone[i - 1]: " << dpone[i - 1] << " (dpone[n] - dpone[j]): " <<
            /// (dpone[n] - dpone[j]) << " (dpzero[j] - dpzero[i - 1]): " << (dpzero[j] - dpzero[i - 1]) << " k: " << k<< "\n";
            ans = max(ans, k);
        }
    }

    /*cout << "   #DP - 1 \n";
    for (int i = 1; i <= n; ++i)
    {
        cout << dpone[i] << " \n"[i == n];
    }

    cout << "   #DP - 0  \n";
    for (int i = 1; i <= n; ++i)
    {
        cout << dpzero[i] << " \n"[i == n];
    }*/

    if (dpone[n] == n)
    {
        ans = n - 1;
    }

    cout << ans << "\n";
    /*/ 1 0 0 1 0 /*/
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