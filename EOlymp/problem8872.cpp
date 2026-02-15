/*
 * Problem: 8872
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8872
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        swap(a, b);
    }
    if (a > c)
    {
        swap(a, c);
    }
    if (b > c)
    {
        swap(b, c);
    }
    cout << a << ' ' << b << ' ' << c << '\n';
}