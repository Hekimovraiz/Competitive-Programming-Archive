// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#ifndef ONLINE_JUDGE
#include "__Lek_Raiz.h"
#else
#define debug(...)
#define debugArr(...)
#define debugG(...)
#endif

#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")

#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define str string
#define pb push_back
#define pf push_front
#define ep emplace_back
#define pii pair<int, int>
#define FOR0(i, n) for (int i = 0; i < n; ++i)
#define FOR1(i, n) for (int i = 1; i <= n; ++i)
#define size(x) (int)x.size()

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 1000 + 4;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz][sz], a[sz][sz];

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }

    dp[1][1] = a[1][1];
    for (int i = 2; i <= n; ++i)
    {
        dp[i][1] = dp[i - 1][1] + a[i][1];
    }
    for (int i = 2; i <= m; ++i)
    {
        dp[1][i] = dp[1][i - 1] + a[1][i];
    }
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 2; j <= m; ++j)
        {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }

    int i = n, j = m;
    vector<pair<int, int>> positions;
    positions.pb({n, m});

    while (i > 1 || j > 1)
    {
        if (i == 1)
        {
            --j;
        }
        else if (j == 1)
        {
            --i;
        }
        else if (dp[i - 1][j] < dp[i][j - 1])
        {
            --i;
        }
        else
        {
            --j;
        }
        positions.pb({i, j});
    }

    reverse(all(positions));
    cout << dp[n][m] << "\n";
    for (auto [x, y] : positions)
    {
        cout << x << " " << y << "\n";
    }

    /*for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }*/
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}

/*

*/