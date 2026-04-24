// Problem ID: 2181B
// Platform: Codeforces
// Link: https://codeforces.com/contest/2181/problem/B

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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
 
    priority_queue<int> pq1, pq2;
 
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        pq1.push(a[i]);
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
        pq2.push(b[i]);
    }
 
    bool flag = false;
 
    while (!pq1.empty() && !pq2.empty())
    {
        if (!flag)
        {
            int x = pq1.top(), y = pq2.top();
            pq2.pop();
 
            if (y > x)
            {
                pq2.push(y - x);
            }
        }
        else
        {
            int x = pq2.top(), y = pq1.top();
            pq1.pop();
 
            if (y > x)
            {
                pq1.push(y - x);
            }
        }
        flag = !flag;
    }
 
    if (pq2.empty())
    {
        cout << "Alice
";
    }
    else
    {
        cout << "Bob
";
    }
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