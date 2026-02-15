/*
 * Problem: 10672
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/10672
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
#define ep emplace_back

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n , s ; cin >> n >> s;
    vector<int> v(n + 1);
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin() + 1 , v.begin() + 1 + n);
 
    int l = 1 , r = 1 , cvb = 0;
    while(r <= n )
    {
        while(v[r] - v[l] > s)
        {
            ++l;
        }
        cvb = max(cvb , r - l + 1);
        ++r;
    }

    cout << cvb << "\n";
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
