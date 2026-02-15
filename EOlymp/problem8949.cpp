/*
 * Problem: 8949
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8949
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
            if (i+j == n+1 || i==j || ((i-1 < j && j < n-i+1)) || ((j-1 < i && j > n-i+1)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<'\n';
    }
}
