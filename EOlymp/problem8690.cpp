/*
 * Problem: 8690
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8690
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

void sgn(long long x, long long y, long long z)
{
    cout << x * y * z  + x + y * y + z * z * z << "\n";
  
}



signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    long long x , y , z;
    cin >> x >> y >> z;
    sgn(x , y , z);


}