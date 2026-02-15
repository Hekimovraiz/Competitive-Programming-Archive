/*
 * Problem: 4749
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/4749
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n , m;
    cin >> n >> m;
    int a[n][m];
    int b[n][m];

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> b[i][j];
        }
    }

    int sum = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        for (int j = 0 ; j < m ; ++j)
        {
            if(b[i][j] == 1)
            {
                sum += a[i][j];
            }
        }
    }

    cout << sum << "\n";

}
