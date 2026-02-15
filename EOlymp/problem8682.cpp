/*
 * Problem: 8682
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8682
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    int l = 0;
    int k = 0;
    while (n != 0){
        int s = n % 10;
        if(s % 2 != 0){
            l += pow(10 , k) * s;
            k += 1;
        }
        n = n / 10;
    }
    cout << l;
    return 0;
}