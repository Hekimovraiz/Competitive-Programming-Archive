/*
 * Problem: 318A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/318/problem/A
 */
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
 
    int s = (n + 1) / 2; 
 
    if (k <= s) {
        cout << 2 * k - 1 << "
"; 
    } else {
        cout << 2 * (k - s) << "
"; 
    }
}