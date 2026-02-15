/*
 * Problem: 903
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/903
 */

#include <bits/stdc++.h>
#define int long long 
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int k;
    cin >> k;
    if(k % 10 == k / 100){
        cout << "=" << "\n";
    }
    else{
        cout << max(k % 10 , k / 100) << "\n";
    }
}
