/*
 * Problem: 8921
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8921
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n != 0){
        int k = n % 10;
        cout << k << "\n";
         n /= 10;
    }
}
