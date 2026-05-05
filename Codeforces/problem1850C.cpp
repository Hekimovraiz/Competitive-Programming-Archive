/*
 * Problem: 1850C
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1850/problem/C
 */
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
    char a[8][8];
    for(int i = 0 ; i < 8 ; ++i)
    {
        for(int j = 0 ; j < 8 ; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] != '.')
            {
                cout << a[i][j];
            }
        }
    }
    cout << "
";
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