/*
 * Problem: 102267B
 * Platform: Codeforces
 * Link: https://codeforces.com/gym/102267/problem/B
 */

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

const int sz = 1e3 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;


void solve()
{
    int n;
    cin >> n;

    vector<bool> p(n + 1, true);
    p[0] = p[1] = false;

    for (int i = 2; i * 1LL * i <= n; i++)
    {
        if (p[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                p[j] = false;
            }
        }
    }

    for (int a = 2; a <= n; a++)
    {
        int b = n - a;
        if (b >= 2 && p[a] && p[b])
        {
            cout << a << " " << b << '\n';
            return;
        }
    }
    cout << -1 << "\n";
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