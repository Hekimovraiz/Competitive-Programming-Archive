/*
 * Problem: 1603
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/1603
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    n = abs(n);
    int k = 0;
    while (n != 0){
        k += n % 10;
        n = n / 10;
    }    
    cout << k;
    return 0;
}