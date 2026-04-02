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

const int sz = 2e4 + 3;

void solve()
{
    int n , q ; cin >> n >> q;
    vector<int> v(n + 1);
    vector<int> prefix_sum(n + 1);
    int sum = 0;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> v[i];
        sum += v[i];
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    } 
    while(q--)
    {
        int a , b , c; cin >> a >> b >> c;
        int ts = prefix_sum[b] - prefix_sum[a - 1] ;
        int p = sum - ts + (b - a + 1) * c;
        cout << (p % 2 == 0 ? "NO\n" : "YES\n");
    }
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
