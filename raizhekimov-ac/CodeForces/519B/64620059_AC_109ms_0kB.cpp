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

const int sz = 1e5 + 2;
const int MOD = 1000003;
const int INF = 1e18;
/// int a[sz] , b[sz] , c[sz];
int n , sum1 = 0 , sum2 = 0 , sum3 = 0;


void solve()
{
    cin >> n;
    
    for(int i = 1 ; i <= n ; ++i)
    {
        int x ; cin >> x;
        sum1 += x;
    }

    for(int i = 1 ; i <= n - 1 ; ++i)
    {
        int x ; cin >> x;
        sum2 += x;
    }
    for(int i = 1 ; i <= n - 2 ; ++i)
    {
        int x ; cin >> x;
        sum3 += x;
    }
    cout << sum1 - sum2 << "\n" << sum2 - sum3 << "\n";
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
