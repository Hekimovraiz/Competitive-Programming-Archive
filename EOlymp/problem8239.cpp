/*
 * Problem: 8239
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8239
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

void slove(double x)
{
    cout << fixed << setprecision(4) << pow(x , 3) + 2 * x * x -3 << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    double n;
    while(cin >> n)
    {
    slove(n);
    }
}