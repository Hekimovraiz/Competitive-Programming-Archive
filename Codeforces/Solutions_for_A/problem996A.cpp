/*
 * Problem: 996A - Hit the Lottery
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/996/problem/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    
    cout << n / 100 + (n % 100) / 20 + ((n % 100) % 20) / 10 + (((n % 100) % 20) % 10) / 5 + ((((n % 100) % 20) % 10) % 5) << "
";
    
}