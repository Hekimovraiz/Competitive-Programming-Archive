/*
 * Problem: 8684
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8684
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t , cem = 0 ,say = 0;

    while(cin >> t){
        say++;
        cem += t;
    }
    cout << say << " " << cem << "\n";
}
