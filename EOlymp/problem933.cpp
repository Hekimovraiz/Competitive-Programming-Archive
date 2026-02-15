/*
 * Problem: 933
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/933
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n = abs(n);
    cout << n % 10 + n / 10;
    return 0;
}