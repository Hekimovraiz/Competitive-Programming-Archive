#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n][m] , k = 1;

    for(int i = 0; i < n; ++i) {             
        for(int j = 0; j < m; ++j) {         
            cout << k << " ";
            ++k;      
        }
        cout << "\n";
    }
}
