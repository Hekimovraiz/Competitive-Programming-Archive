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
    int k;
    cin >> k;
    int a[13], sum = 0, ans = 0, sum1 = 0;
    int d = 12;
 
    for (int i = 1; i <= d; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
 
    if (k == 0)
    {
        cout << 0 << '
';
        return;
    }
 
    if (sum < k)
    {
        cout << -1 << '
';
        return;
    }
 
    sort(a + 1, a + 1 + d);
 
    for (int i = d; i > 0; --i)
    {
        sum1 += a[i];
        ++ans;
        if (sum1 >= k)
        {
            cout << ans << '
';
            return;
        }
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