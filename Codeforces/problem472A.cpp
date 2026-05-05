/*
 * Problem: 472A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/472/problem/A
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
 
bool isPrime(int x)
{
    int cnt = 0;
    for(int i = 2 ; i * i <= x ; ++i)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}
 
void solve()
{
    int n ; cin >> n;
    for(int i = 4 ; i <= (n + 1) / 2 ; ++i)
    {
        int k = n - i;
        if(!isPrime(k) && !isPrime(i))
        {
            cout << i << " " << k << "
";
            break;
        }
    }
    
}
 
signed main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}