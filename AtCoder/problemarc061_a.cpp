/*
 * Problem: arc061_a
 * Platform: AtCoder
 * Link: https://atcoder.jp/contests/arc061/tasks/arc061_a
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
    int n;
    cin >> n;

    str s = to_string(n);
    int total = 0;

    for (int mask = 0; mask < (1LL << ((int)s.size() - 1)); ++mask)
    {
        int sum = 0, cur = s[0] - '0';

        for (int i = 0; i < (int)s.size() - 1; ++i)
        {

            if (mask & (1LL << i))
            {
                sum += cur;
                cur = s[i + 1] - '0';
            }
            else
            {
                cur = cur * 10 + (s[i + 1] - '0');
            }
        }

        sum += cur;
        total += sum;
    }

    cout << total << "\n";
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