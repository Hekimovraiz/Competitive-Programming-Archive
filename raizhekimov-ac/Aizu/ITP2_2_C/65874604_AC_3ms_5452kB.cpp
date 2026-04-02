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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
// priority_queue<int, vector<int>, greater<int>> pq;

void solve()
{
    int n, qr;
    cin >> n >> qr;
    vector<priority_queue<int>> pq(n + 1);

    int ans;

    while (qr--)
    {
        cin >> ans;
        if (ans == 0)
        {
            int t, x;
            cin >> t >> x;
            pq[t].push(x);
        }
        else if (ans == 1)
        {
            int t;
            cin >> t;
            if (!pq[t].empty())
            {
                cout << pq[t].top() << "\n";
            }
        }
        else
        {
            int t;
            cin >> t;
            if (!pq[t].empty())
            {

                pq[t].pop();
            }
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