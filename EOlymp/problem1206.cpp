/*
 * Problem: 1206
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/1206
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

int f91(int n)
{
    if (n <= 100)
    {
        return f91(f91(n + 11));
    }
    else if( n >= 101)
    {
        return n - 10;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    cout << f91(n) << "\n";

}