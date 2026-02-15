/*
 * Problem: 8241
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8241
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

void slove(double x , double y)
{
    cout << fixed << setprecision(4) << x * x + sin(x * y) - y * y << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    double n , m;
    while(cin >> n >> m)
    {
    slove(n , m);
    }
}