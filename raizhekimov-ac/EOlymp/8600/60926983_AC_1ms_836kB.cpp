#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int k;
    cin >> k;
    cout << (k % 10) + (k / 10) << " " << (k % 10) * (k / 10);
    return 0;
}