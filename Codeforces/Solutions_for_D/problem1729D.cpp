// Problem ID: 1729D
// Platform: Codeforces
// Link: https://codeforces.com/contest/1729/problem/D

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
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }
 
    deque<int> dq;
    map<int, int> mp;
 
    for (int i = 1; i <= n; ++i)
    {
        dq.pb(b[i] - a[i]);
        mp[b[i] - a[i]] = i;
    }
    sort(all(dq));
 
    int ans = 0;
 
    while (dq.size() >= 2)
    {
        if (dq.front() + dq.back() >= 0)
        {
            ++ans;
            dq.pop_front();
            dq.pop_back();
        }
        else
        {
            dq.pop_front();
        }
    }
 
 
    cout << ans << "
";
 
    /*
        6
        8 3 9 2 4 5       -3  0  -8  -2  1  5  , ans = 0 -> 0  -8  -2  1 , ans = 1 -> -2 , -8
        5 3 1 4 5 10
 
    */
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