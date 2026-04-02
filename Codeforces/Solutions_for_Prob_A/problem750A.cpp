/*
 * Problem: 750A - New Year and Hurry
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/750/A
 */

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;


void slove()
{
    int n, k;
    cin >> n >> k;
    
    int t = 240 - k; 
    int s = 0; 
    int cnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        s += 5 * i;
        if (s > t)
        {
            break;
        }
        ++cnt;
    }

    cout << cnt << "\n";   
}



signed main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;
    while(t--)
    {
        slove();
    }
}

