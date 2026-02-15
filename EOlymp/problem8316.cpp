/*
 * Problem: 8316
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8316
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string n;
    cin >> n;
    sort(n.begin() , n.end());
    cout << n << "\n";
    reverse(n.begin() , n.end());
    cout << n << "\n";
}