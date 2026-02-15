/*
 * Problem: 108
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/108
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int a , b , c;
    cin >> a >> b >> c;
    if ((a > b && a < c) || (a > c && a < b))
        cout << a << "\n";
    else if ((b > a && b < c) || (b > c && b < a))
        cout << b << "\n";
    else
        cout << c << "\n";
    return  0;
}