/*
 * Problem: 2178B - Impost or Sus
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2178/problem/B
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
 
const int sz = 1e9 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    str s;
    cin >> s;
    int ans = 0;
    if ((int)s.size() == 1)
    {
        cout << (s[0] == 'u' ? 1 : 0) << "
";
        return;
    }
 
    if (s[0] == 'u')
    {
        ++ans;
        s[0] = 's';
    }
    if (s.back() == 'u')
    {
        ++ans;
        s[(int)s.size() - 1] = 's';
    }
 
    bool flag = false;
    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (s[i] == 's')
        {
            flag = false;
            continue;
        }
 
        if (i < (int)s.size() - 2 && s[i] == 's' && s[i + 1] == 'u' && s[i + 2] == 's')
        {
            i += 2;
        }
        else if (flag && s[i] == 'u')
        {
            ++ans;
            flag = false;
        }
        else if (s[i] == 'u' && flag == false)
        {
            flag = true;
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