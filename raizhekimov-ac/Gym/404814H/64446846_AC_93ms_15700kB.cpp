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
        str k;
        cin >> k;

        if (k == "push_back")
        {
            int x;
            cin >> x;
            dq.pb(x);
        }
        else if (k == "push_front")
        {
            int x;
            cin >> x;
            dq.pf(x);
        }
        else if (k == "pop_back")
        {
            dq.pop_back();
        }
        else if (k == "pop_front")
        {
            dq.pop_front();
        }
        else if (k == "front")
        {
            cout << dq.front() << "\n";
        }
        else if (k == "back")
        {
            cout << dq.back() << "\n";
        }
        else if (k == "print")
        {
            int idx;
            cin >> idx;
            cout << dq[idx - 1] << "\n";
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