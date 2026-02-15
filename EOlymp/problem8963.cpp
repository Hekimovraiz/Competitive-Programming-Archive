/*
 * Problem: 8963
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8963
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int min = a[0];

    for(int i = 0 ; i < n ; ++i)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    int b[n];

    int j = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        if (a[i] == min)
        {
            b[j++] = a[i];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        if (a[i] != min)
        {
            b[j++] = a[i];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        cout << b[i] << " ";
    }


}