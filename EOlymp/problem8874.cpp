/*
 * Problem: 8874
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8874
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin >> n;
    if ((n >= 10 && n <= 99) || (n <= -10 && n >= -99)){
        cout << "Ok" << "\n";
    }else{
        cout << "No" << "\n";
    }
    return 0;
}
