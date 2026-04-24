// Problem ID: 1791D
// Platform: Codeforces
// Link: https://codeforces.com/contest/1791/problem/D

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
 
const int sz = 1e9 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    int n;
    cin >> n;
    str s;
    cin >> s;
 
    s = "#" + s;
 
    int pref[n + 2], suf[n + 2];
    pref[0] = suf[n + 1] = 0;
 
    set<char> st;
    for (int i = 1; i <= n; ++i)
    {
        st.insert(s[i]);
        pref[i] = st.size();
    }
 
    set<char> st2;
    for (int i = n; i >= 1; --i)
    {
        st2.insert(s[i]);
        suf[i] = st2.size();
    }
 
    int ans = 0;
    for (int i = 1; i < n; ++i)
    {
        ans = max(ans, pref[i] + suf[i + 1]);
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