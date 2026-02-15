/*
 * Problem: 9893
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/9893
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr) ; cout.tie(nullptr);

    int n;
    cin >> n;
    int m[n][n];

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            m[i][j] = i + 1 + j + 1;
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            cout << m[i][j] << " ";
        }

        cout << "\n";
    }
}
