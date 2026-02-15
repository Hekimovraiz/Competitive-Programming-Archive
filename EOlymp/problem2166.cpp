/*
 * Problem: 2166
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/2166
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size()) {
        cout << "NO\n";
        return 0;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}