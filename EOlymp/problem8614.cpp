/*
 * Problem: 8614
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8614
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int x, a, b;
    cin >> x >> a >> b;

    if (a <= x && x <= b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
