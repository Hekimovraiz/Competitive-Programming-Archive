/*
 * Problem: ADAQUEUE
 * Platform: SPOJ
 * Link: https://www.spoj.com/problems/ADAQUEUE
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
    int qr;
    cin >> qr;
    deque<int> dq;
    while (qr--)
    {
        str x;
        cin >> x;
        if (x == "back")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?\n";
            }
            else
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (x == "front")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?\n";
            }
            else
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (x == "reverse")
        {
            reverse(all(dq));
        }
        else if (x == "push_back")
        {
            int n;
            cin >> n;
            dq.pb(n);
        }
        else if (x == "toFront")
        {
            int n;
            cin >> n;
            dq.pf(n);
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