// Problem ID: 2157A
// Platform: Codeforces
// Link: https://codeforces.com/contest/2157/problem/A

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
#define rall(v) v.rbegin(), v.rend()
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
 
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    map<int, int> mp;
 
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        ++mp[a[i]];
    }
 
    int ans = 0;
 
    /*for (auto [x, y] : mp)
    {
        cout << x << " " << y << "
";
    }*/
 
    for (auto [x, y] : mp)
    {
        if (x != y)
        {
            if (y > x)
            {
                ans += (y - x);
            }
            else
            {
                ans += y;
            }
        }
    }
 
    cout << ans << "
";
}
 
signed main()
{
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}