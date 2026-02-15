/*
 * Problem: 6059
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/6059
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k = (n + 1) / 2;
        cout << k * k << '\n';
    }
}