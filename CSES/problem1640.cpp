/*
 * Problem: 1640
 * Platform: CSES
 * Link: https://cses.fi/problemset/task/1640
 */

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

const int sz = 1e6 + 3;
const int MOD = 1e9 + 7;
const int INF = 1e18;

map<int, bool> mp;
map<int, int> mpp;
bool flag = true;

void solve()
{
    int n, a;
    cin >> n >> a;
    int cc1 = 0, cc2 = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (flag)
        {
            int f = a - x;
            if (mp[f])
            {
                flag = false;
                cc1 = mpp[f], cc2 = i;
            }
        }
        mp[x] = true;
        mpp[x] = i;
    }
    if (!flag)
    {
        cout << cc1 << " " << cc2 << "\n";
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }
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