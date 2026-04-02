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

const int sz = 1e5 + 2;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz], n;
vector<int> v = {1, 3, 6, 10, 15};

void f()
{
    dp[0] = 0;
    for (int i = 1; i <= sz; ++i)
    {
        dp[i] = INF;
        for (int num : v)
        {
            if (num <= i)
            {
                dp[i] = min(dp[i], dp[i - num] + 1);
            }
        }
    }
}

void _()
{
    int x = (n - 1e5 + 14) / 15;
    n = max(0LL, n - x * 15);
    cout << x + dp[n] << '\n';
}

void solve()
{
    cin >> n;
    if (n > 1e5)
    {
        _();
    }
    else
    {
        cout << dp[n] << "\n";
    }
}

signed main()
{
    f();
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}