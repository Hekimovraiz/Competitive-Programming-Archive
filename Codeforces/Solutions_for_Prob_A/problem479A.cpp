/*
 * Problem: 479A - Expression
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/479/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int a , b , c;
    cin >> a >> b >> c;
    int res = max({
        a + b + c,
        a * b * c,
        (a + b) * c,
        a * (b + c),
        a + b * c,
        a * b + c
    });
    cout << res << "\n"; 
}
