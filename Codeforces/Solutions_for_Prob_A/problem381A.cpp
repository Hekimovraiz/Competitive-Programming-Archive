/*
 * Problem: 381A - Sereja and Dima
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/381/A
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
#define ll long long
#define str string
#define pb push_back
#define ep emplace_back
#define pii pair<int, int>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 1e6 + 5;
const int MOD = 1000003;
const int INF = 1e18;
int a[sz], dp[sz];

void solve()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> dq[i];
    }
    int s = 0, d = 0;
    bool flag = true;
    while ((int)dq.size() != 0)
    {
        if (flag)
        {
            if (dq.front() > dq.back())
            {
                s += dq.front();
                dq.pop_front();
            }
            else
            {
                s += dq.back();
                dq.pop_back();
            }
            flag = false;
        }
        else
        {
            if (dq.front() > dq.back())
            {
                d += dq.front();
                dq.pop_front();
            }
            else
            {
                d += dq.back();
                dq.pop_back();
            }
            flag = true;
        }
    }
    cout << s << " " << d << "\n";
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
