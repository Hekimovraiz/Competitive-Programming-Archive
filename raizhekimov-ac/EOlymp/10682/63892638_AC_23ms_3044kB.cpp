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

void solve()
{
    int n , m ; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
    }
    /// sort(all(v));

    int r = 0 , l = 0 , max_sum = 0 , sum = 0;
    while(r <= n)
    {
        sum += v[r]; 
        ++r;
        while(sum > m)
        {
            sum -= v[l];
            ++l;
        }  
        max_sum = max(max_sum , sum);
    }
    cout << max_sum << '\n';
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
