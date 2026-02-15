/*
 * Problem: 7829
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/7829
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    double k = 0;
    for(int i = 0; i <= n ; i++){
        double s;
        cin >> s;
        k += s;
    }
    cout << fixed << setprecision(1) << k << "\n";
    return 0;
}