/*
 * Problem: 2176C - Odd Process
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2176/problem/C
 */

// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
/// #include "__Lek_Raiz.h"
 
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
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
 
const int sz = 1e6 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
 
    vector<int> tek, cut;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
        {
            tek.pb(a[i]);
        }
        else
        {
            cut.pb(a[i]);
        }
    }
 
    sort(rall(tek)); sort(rall(cut));
 
    int cnt_tek = (int)tek.size(), cnt_cut = (int)cut.size();
 
    vector<int> pref(cnt_cut + 1, 0);
    for (int i = 0; i < cnt_cut; ++i)
    {
        pref[i + 1] = pref[i] + cut[i];
    }
 
    for (int k = 1; k <= n; ++k)
    {
        int f = max(1LL, k - cnt_cut);
        if (f % 2 == 0)
        {
            ++f;
        }
 
        if (f > k || f > cnt_tek)
        {
            cout << 0 << (k == n ? "" : " ");
        }
        else
        {
            int ans = tek[0] + pref[k - f];
            cout << ans << (k == n ? "" : " ");
        }
    }
    cout << "
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