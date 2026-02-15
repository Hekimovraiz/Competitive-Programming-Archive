/*
 * Problem: 8826
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8826
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x;
    cin >> x;
    double y = x - ( (pow(x , 2) + 4) / 2 ) + (pow(x , 3)) -(3 / (x + 7));
    cout << fixed << setprecision(3) <<  y << "\n";
    return  0;
}