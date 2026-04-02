/*
 * Problem: 703A - Mishka and Game
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/703/A
 */

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define int long long
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;
*/

void solve()
{
    int n ; cin >> n;
    int mishka = 0 , chris = 0;
    while(n--)
    {
        int a , b ; cin >> a >> b;
        if(a > b)
        {
            ++mishka;
        }
        else if(a < b)
        {
            ++chris;
        }
    }
    if(mishka > chris)
    {
        cout << "Mishka" << "\n";
    }
    else if(chris > mishka)
    {
        cout << "Chris" << '\n';
    }
    else
    {
        cout << "Friendship is magic!^^\n";
    }
}


signed main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}


