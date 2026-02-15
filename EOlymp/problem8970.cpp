/*
 * Problem: 8970
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8970
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

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int l = 0, r = n / 2;
    if (n % 2 != 0)
    {
        cout << a[0] << ' ';
        l++;
        r++;
        while(r < n)
        {
            cout << a[r] << ' ' << a[l] << ' ';
            l++;
            r++;
        }
    }
    else
    {
        while(r < n)
        {
            cout << a[l] << ' ' << a[r] << ' ';
            l++;
            r++;
        }
    }
}