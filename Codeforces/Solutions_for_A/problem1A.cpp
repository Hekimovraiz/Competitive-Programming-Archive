/*
 * Problem: 1A - Theatre Square
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1/problem/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    long long n, m, a;
    cin >> n >> m >> a;
 
    long long x = (n + a - 1) / a;
    long long y = (m + a - 1) / a;
 
    cout << x * y << "
";
 
    
}