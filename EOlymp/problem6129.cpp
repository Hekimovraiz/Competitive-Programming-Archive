/*
 * Problem: 6129
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/6129
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
#define pf push_front
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
    deque<int> dq;
    str x;
    while (cin >> x)
    {
        if (x == "push_front")
        {
            int f;
            cin >> f;
            dq.pf(f);
            cout << "ok\n";
        }
        else if (x == "push_back")
        {
            int f;
            cin >> f;
            dq.pb(f);
            cout << "ok\n";
        }
        else if (x == "pop_back")
        {
            if ((int)dq.size() == 0)
            {
                cout << "error\n";
            }
            else
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (x == "pop_front")
        {
            if ((int)dq.size() == 0)
            {
                cout << "error\n";
            }
            else
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (x == "front")
        {
            if ((int)dq.size() == 0)
            {
                cout << "error\n";
            }
            else
            {
                cout << dq.front() << "\n";
            }
        }
        else if (x == "back")
        {
            if ((int)dq.size() == 0)
            {
                cout << "error\n";
            }
            else
            {
                cout << dq.back() << "\n";
            }
        }
        else if (x == "size")
        {
            cout << (int)dq.size() << "\n";
        }
        else if (x == "clear")
        {
            dq.clear();
            cout << "ok\n";
        }
        else if (x == "exit")
        {
            cout << "bye\n";
            break;
        }
    }
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}