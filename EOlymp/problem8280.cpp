/*
 * Problem: 8280
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8280
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
   int k = 0;
   for(int i = 2; i <= (n + 1) ; i++){
    if (n % i == 0 && i % 2 == 0){
        k++;
    }
   }
   cout << k;
    return 0;
}