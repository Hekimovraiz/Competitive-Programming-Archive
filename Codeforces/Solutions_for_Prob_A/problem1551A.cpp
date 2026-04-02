/*
 * Problem: 1551A - Polycarp and Coins
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1551/A
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define all v.begin() , v.end()

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin >> n;
    int k = n / 3;
    int f = n % 3;
    int c1 = k , c2 = k;
    if (f == 1)
    {
        ++c1;
    }
    else if(f == 2)
    {
        ++c2;
    }
    cout << c1 << " " << c2 << "\n";

}


signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
