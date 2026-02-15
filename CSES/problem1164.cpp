/*
 * Problem: 1164
 * Platform: CSES
 * Link: https://cses.fi/problemset/task/1164
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

const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
// priority_queue<int, vector<int>, greater<int>> pq;

void solve()
{
    int n, cnt = 0;
    cin >> n;

    vector<tuple<int, int, int>> v(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b, i};
    }

    sort(all(v));

    for (auto &[a, b, idx] : v)
    {
        if (!pq.empty() && pq.top().first < a)
        {
            int otaq = pq.top().second;
            pq.pop();
            ans[idx] = otaq;
            pq.push({b, otaq});
        }
        else
        {
            cnt++;
            ans[idx] = cnt;
            pq.push({b, cnt});
        }
    }

    cout << cnt << "\n";
    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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