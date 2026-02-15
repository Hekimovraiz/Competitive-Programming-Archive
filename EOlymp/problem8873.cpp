/*
 * Problem: 8873
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8873
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin >> n;
    if ((n >= 1 && n <= 9) || (n <= -1 && n >= -9) || ( n == 0 )){
        cout << "Ok" << "\n";
    }else{
        cout << "No" << "\n";
    }
    return 0;
}
