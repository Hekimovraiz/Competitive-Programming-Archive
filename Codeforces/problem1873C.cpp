/*
 * Problem: 1873C - Target Practice
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1873/C
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define all v.begin() , v.end()
#define v_i for(int i = 0 ; i < n ; ++i)

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    char a[10][10];
    for(int i = 0 ; i < 10 ; ++i)
    {
        for (int j = 0 ; j < 10 ; ++j)
        {
            cin >> a[i][j];
        }
    }

    int tar = 0;

    for(int i = 0 ; i < 10 ; ++i)
    {
        for(int j = 0 ; j < 10 ; ++j)
        {
            if( (a[i][j] == 'X' && j == 0) || (a[i][j] == 'X' && j == 9) || (a[i][j] == 'X' && i == 0 )|| (a[i][j] == 'X' && i == 9))
            {
                tar += 1;
            }
            else if((a[i][j] == 'X' && j == 1 && i >= 1 && i <= 8) || (a[i][j] == 'X' && i == 1 && j >= 1 && j <= 8) || (a[i][j] == 'X' && j == 8 && i >= 1 && i <= 8) || (a[i][j] == 'X' && i == 8 && j >= 1 && j <= 8))
            {
                tar += 2;
            }
            else if((a[i][j] == 'X' && j == 2 && i >= 2 && i <= 7) || (a[i][j] == 'X' && j == 7 && i >= 2 && i <= 7) || (a[i][j] == 'X' && i == 2 && j >= 2 && j <= 7) || (a[i][j] == 'X' && i == 7 && j >= 2 && j <= 7))
            {
                tar += 3;
            }
            else if((a[i][j] == 'X' && j == 3 && i >= 3 && i <= 6) || (a[i][j] == 'X' && j == 6 && j >= 3 && j <= 6) || (a[i][j] == 'X' && i == 3 && j >= 3 && j <= 6) || (a[i][j] == 'X' && i == 6 && j >= 3 && j <= 6))
            {
                tar += 4;
            }
            else if((a[i][j] == 'X' && i == 4 && j == 4) || (a[i][j] == 'X' && i == 5 && j == 4) || (a[i][j] == 'X' && i == 4 && j == 5) || (a[i][j] == 'X' && i == 5 && j == 5))
            {
                tar += 5;
            }

        }
    }

    cout << tar << "\n";
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
