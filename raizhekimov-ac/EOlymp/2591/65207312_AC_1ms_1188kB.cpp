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

const int sz = 405;
const int MOD = 1e9 + 7;
const int INF = 1e18;

vector<pair<int, pair<int, int>>> v(sz);

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;
    }

    for (int i = 1; i <= n; ++i)
    {
        int cnt = 0;

        for (int j = 1; j <= n; ++j)
        {
            if (i == j)
            {
                continue;
            }
            int x = (v[i].first - v[j].first);
            int y = v[i].second.first - v[j].second.first;
            int rad = (v[i].second.second + v[j].second.second);

            if(x * x + y * y < rad * rad)
            {
                ++cnt;
            }
        }
        cout << cnt << "\n";
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