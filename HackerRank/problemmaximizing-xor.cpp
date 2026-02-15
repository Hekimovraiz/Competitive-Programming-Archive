/*
 * Problem: maximizing-xor
 * Platform: HackerRank
 * Link: https://www.hackerrank.com/challenges/maximizing-xor/problem
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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
priority_queue<int, vector<int>, greater<int>> pq;

const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int l, r, ans = -INF;
    cin >> l >> r;

    /// 1e3 * 1e3 = 1'000'000 -> 2e6 TLE'ye yaxindi amma deyil(mence)

    for (int i = l; i <= r; ++i)
    {
        for (int j = i + 1; j <= r; ++j)
        {
            ans = max(ans , i ^ j);
        }
    }

    cout << ans << "\n";
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