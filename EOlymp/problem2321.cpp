/*
 * Problem: 2321
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/2321
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

    sort(a , a + n);
    for(int i = 0 ; i < n ; ++i)
    {
        cout << a[i] << " ";
    }
}
