#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++){
        cout << i * i << " ";
    }
    return 0;
}