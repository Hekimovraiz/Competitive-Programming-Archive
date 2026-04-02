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

const int sz = 1e5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int ans[sz], a[sz];

void solve()
{
    int n, l;
    cin >> n >> l;
    set<int> st;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    for (int i = n; i >= 1; --i)
    {
        st.insert(a[i]);
        ans[i] = (int) st.size();
    }

    while (l--)
    {
        int x;
        cin >> x;
        cout << ans[x] << "\n";
    }
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
