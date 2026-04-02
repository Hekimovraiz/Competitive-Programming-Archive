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

void solve()
{
    int n ; cin >> n;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> a[i];
    }

    int max_cnt = 1;
    for(int i = 1 ; i < n ; ++i)
    {
        if(a[i] <= a[i + 1])
        {
            int cnt = 1;
            while(a[i] <= a[i + 1] && i < n)
            {
                //cout << " cnt: " << cnt << " i : " << i <<  " a[i]: " << a[i] << " a[i + 1]: " << a[i  + 1] << "\n";
                ++i;
                ++cnt;
            }
            max_cnt = max(max_cnt , cnt);
            //cout << " cnt: " << cnt << " i : " << i <<  " a[i]: " << a[i] << " a[i + 1]: " << a[i  + 1] << "\n";
        }
    }

    cout << max_cnt << "\n";
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
