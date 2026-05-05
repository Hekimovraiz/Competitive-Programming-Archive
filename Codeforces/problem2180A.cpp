/*
 * Problem: 2180A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2180/problem/A
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, a, b, t;
    cin >> t;
    while(t--) {
        cin >> l >> a >> b;
        cout << l - __gcd(l, b) + a % __gcd(l, b) << '
'; 
    }
    return 0;
}