/*
 * Problem: 941
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/941
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    a = abs(a);
    cout <<((a % 10) * (a / 100) * ((a % 100) / 10)) - ((a % 10) + (a / 100) + ((a % 100) / 10)) << endl;
    return 0;
}