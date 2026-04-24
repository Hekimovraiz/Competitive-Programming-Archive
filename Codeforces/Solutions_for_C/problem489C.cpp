/*
 * Problem: 489C - Given Length and Sum of Digits...
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/489/problem/C
 */

// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#ifndef ONLINE_JUDGE
#include "__Lek_Raiz.h"
#else
#define debug(...)
#define debugArr(...)
#define debugG(...)
#endif
 
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
 
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
#define FOR0(i, n) for (int i = 0; i < n; ++i)
#define FOR1(i, n) for (int i = 1; i <= n; ++i)
#define size(x) (int)x.size()
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
 
const int sz = 20 + 31;
const int MOD = 1000003;
const int INF = 1e18;
 
// variables :
int m, sum;
str max_num = "", min_num = "";
int max_num_sum = 0, min_num_sum = 0, cnt = 0;
 
void solve()
{
    cin >> m >> sum;
 
    if ((m > 1 && sum == 0) || m * 9 < sum)
    {
        cout << -1 << " " << -1 << "
";
        return;
    }
 
    while (cnt < m)
    {
        max_num += char('0' + (min(9LL, sum - max_num_sum)));
        max_num_sum += (min(9LL, sum - max_num_sum));
        ++cnt;
    }
 
    cnt = 0;
    min_num_sum = sum;
 
    for (int i = 0; i < m; ++i)
    {
        min_num += '0';
    }
 
    for (int i = m - 1; i >= 0; --i)
    {
        min_num[i] = char('0' + max(0LL, min(9LL, min_num_sum)));
        min_num_sum -= max(0LL, min(9LL, min_num_sum));
    }
 
    if (min_num[0] == '0')
    {
        for (int i = 1; i < m; ++i)
        {
            if (min_num[i] > '0')
            {
                --min_num[i];
                min_num[0] = '1';
                break;
            }
        }
    }
 
    cout << min_num << " " << max_num << "
";
}
 
signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
 
/*
 
*/