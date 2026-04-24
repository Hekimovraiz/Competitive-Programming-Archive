// Problem ID: 2051C
// Platform: Codeforces
// Link: https://codeforces.com/contest/2051/problem/C

// Author: Raiz
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
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
 
const int sz = 1e9 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<int> a(m), q(k);
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; ++i)
    {
        cin >> q[i];
    }
 
    if (k == n)
    {
        for (int i = 0; i < m; ++i)
        {
            cout << '1';
        }
        cout << '
';
        return;
    }
 
    if (n - k > 1)
    {
        for (int i = 0; i < m; ++i)
        {
            cout << '0';
        }
        cout << '
';
        return;
    }
 
    vector<int> v(n + 1, 0);
    for (int x : q)
    {
        v[x] = 1;
    }
 
    int x = -1;
    for (int i = 1; i <= n; ++i)
    {
        if (!v[i])
        {
            x = i;
            break;
        }
    }
 
    for (int i = 0; i < m; ++i)
    {
        cout << (a[i] == x ? '1' : '0');
    }
    cout << '
';
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