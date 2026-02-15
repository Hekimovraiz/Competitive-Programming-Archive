/*
 * Problem: array-left-rotation
 * Platform: HackerRank
 * Link: https://www.hackerrank.com/challenges/array-left-rotation/problem
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

const int sz = 1e5 + 2;
const int MOD = 1000003;
const int INF = 1e18;

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    if (d == n)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
    else if (d < n)
    {
        vector<int> ans(a.begin(), a.begin() + d), ans2(a.begin() + d, a.end());
        /// cout << " ans: " << (int)ans.size() << " ans2: " << ans2.size() << "\n";
        for (int i = 0; i < (int)ans2.size(); ++i)
        {
            cout << ans2[i] << " ";
        }
        for (int i = 0; i < (int)ans.size(); ++i)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        int q = d % n;
        vector<int> ans(a.begin(), a.begin() + q), ans2(a.begin() + q, a.end());
        for (int i = 0; i < (int)ans2.size(); ++i)
        {
            cout << ans2[i] << " ";
        }
        for (int i = 0; i < (int)ans.size(); ++i)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
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