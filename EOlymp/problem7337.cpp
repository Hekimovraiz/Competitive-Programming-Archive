/*
 * Problem: 7337
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/7337
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int a , b ,c;
    cin >> a >> b >> c;
    cout << min({a , b , c}) + max({a , b , c});
    return 0;
}
