/*
 * Problem: 208A - Dubstep
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/208/A
 */

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
    str s, ans = "";
    cin >> s;
    s = "#" + s;

    bool flag = true;
    for (int i = 1; i < (int)s.size(); ++i)
    {
        if (i + 2 < (int)s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (!ans.empty() && flag)
            {
                ans += " ";
                flag = false;
            }
            i += 2;
        }
        else
        {
            ans += s[i];
            flag = true;
        }
    }

    cout << ans << "\n";
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