/*
 * Problem: 8828
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8828
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x;
    cin >> x;
    double y = ((2 * x) - 1) / pow(x , 2) + (sqrt(pow(x , 2) + 1) / 2);
    cout << fixed << setprecision(3) <<  y << "\n";
    return  0;
}