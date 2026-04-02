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

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 1e5 + 2;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz], a[sz];

vector<int> v = {11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < (int)v.size(); ++i)
    {
        if (n % v[i] == 0)
        {
            cout << "YES\n";
            return;
        }
    }

    for (int i = 0; i <= 100; ++i)
    {
        if (n - 111 * i < 0)
        {
            cout << "NO\n";
            return;
        }
        if ((n - 111 * i) % 11 == 0)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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
