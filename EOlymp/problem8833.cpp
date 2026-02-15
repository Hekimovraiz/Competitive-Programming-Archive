/*
 * Problem: 8833
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8833
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x , y;
    cin >> x >> y;
    double s = ((2 * x + y) / (x * x - x * y + 4 * y * y)) + ((x * x * 2 - x * y + y * y) / (x + 4 * y));
    cout << fixed << setprecision(3) <<  s << "\n";
    return  0;
}