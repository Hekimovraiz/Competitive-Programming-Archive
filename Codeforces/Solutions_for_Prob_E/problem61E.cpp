/*
 * Problem: 61E - Enemy is weak
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/61/E
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

const int sz = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> v1(n, 0);
    __indexed_set<int> st1;
    for (int i = 0; i < n; ++i)
    {
        v1[i] = st1.size() - st1.order_of_key(a[i]);
        st1.insert(a[i]);
    }

    vector<int> v2(n, 0);
    __indexed_set<int> st2;
    for (int i = n - 1; i >= 0; --i)
    {
        v2[i] = st2.order_of_key(a[i]);
        st2.insert(a[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cnt += v1[i] * v2[i];
    }
    cout << cnt << '\n';
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