/*
 * Problem: 11440
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/11440
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    if (a.size() == b.size())
    {
        if (a == b)
        {
            cout << a << " == " << b << '\n';
        }
        else if (a > b)
        {
            cout << a << " > " << b << '\n';
        }
        else
        {
            cout << a << " < " << b << '\n';
        }
    }
    else
    {
        if (a.size() > b.size())
        {
            cout << a << " > " << b << '\n';
        }
        else
        {
            cout << a << " < " << b << '\n';
        }
    }
}