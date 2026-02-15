/*
 * Problem: 1076
 * Platform: CSES
 * Link: https://cses.fi/problemset/task/1076
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    deque<int> v;
    __indexed_multiset<int> st;
    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (i < k)
        {
            v.pb(a[i]);
            st.insert(a[i]);
        }
    }

    int mid_index = (k - 1) / 2;
    ans.pb(*st.find_by_order(mid_index));

    for (int i = k; i < n; ++i)
    {
        auto it = st.find_by_order(st.order_of_key(v.front()));
        st.erase(it);
        v.pop_front();

        v.pb(a[i]);
        st.insert(a[i]);

        ans.pb(*st.find_by_order(mid_index));
    }

    for (auto x : ans)
    {
        cout << x << " ";
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