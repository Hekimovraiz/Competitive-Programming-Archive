/*
 * Problem: 8946
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8946
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if ( i == j  || (i % 2 != 0 && j % 2 != 0) || (i % 2 != 1 && j % 2 != 1))
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout<<'\n';
    }
}
