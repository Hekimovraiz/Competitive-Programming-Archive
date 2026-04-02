#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a == b && c == d) ||
        (a == c && b == d) ||
        (a == d && b == c)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}