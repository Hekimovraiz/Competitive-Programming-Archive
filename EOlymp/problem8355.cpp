/*
 * Problem: 8355
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8355
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
    int n ; cin >> n;
    deque<int> dq;
    while(n--)
    {
        int qr ; cin >> qr;
        if(qr == 1)
        {
            int x ; cin >> x;
            dq.pf(x);
        }
        else if(qr == 2)
        {
            int x ; cin >> x;
            dq.pb(x);
        }
        else if(qr == 3)
        {
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        else
        {
            cout << dq.back() << "\n";
            dq.pop_back();
        }
    }
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
