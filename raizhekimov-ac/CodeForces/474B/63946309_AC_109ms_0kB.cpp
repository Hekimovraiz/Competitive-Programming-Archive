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

#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(vector<int> &dp, int x, int mid)
{
    return dp[mid] >= x;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    vector<int> dp(n);
    dp[0] = v[0];
    for (int i = 1; i < n; ++i)
    {
        cin >> v[i];
        dp[i] = dp[i - 1] + v[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1, best = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (check(dp, x, mid))
            {
                best = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << best + 1 << "\n";
    }
}
signed main()
{
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
