// Problem ID: 1294A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1294/problem/A

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve()
{
    int a , b , c , n ; cin >> a >> b >> c >> n;
    int mx = max({a , b , c});
    if(n >= ((mx - a) + (mx - b) + (mx - c)) && (n - ((mx - a) + (mx - b) + (mx - c))) % 3 == 0)
    {
        cout << "YES
";
    }
    else
 
    {
        cout << "NO
";
    }
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