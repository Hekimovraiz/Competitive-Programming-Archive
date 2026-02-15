/*
 * Problem: 9536
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/9536
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
    
    int m , n;
    cin >> n >> m;
    int a[n][m] , b[n][m] , c[n][m];

    for(int i = 0 ; i < n ; ++i)
    {
        for ( int j = 0 ; j < m ; ++j)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        for ( int j = 0 ; j < m ; ++j)
        {
            cin >> b[i][j];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        for ( int j = 0 ; j < m ; ++j)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
    cout << "\n";
    }

    cout << "\n";

}
