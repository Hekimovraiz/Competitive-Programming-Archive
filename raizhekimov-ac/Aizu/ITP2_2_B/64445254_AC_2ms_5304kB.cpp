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
    int n, q;
    cin >> n >> q;
    vector<queue<int>> a(n);

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            int i, x;
            cin >> i >> x;
            a[i].push(x);
        }
        else if (t == 1)
        {
            int i;
            cin >> i;
            if (!a[i].empty())
            {
                cout << a[i].front() << "\n";
            }
        }
        else
        {
            int i;
            cin >> i;
            if (!a[i].empty())
            {
                a[i].pop();
            }
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
