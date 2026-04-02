#include <bits/stdc++.h>
#define int long long 
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n = abs(n);
    cout << (n / 100) << "\n" << (n % 100) / 10 << "\n" << n % 10 << "\n";
}
