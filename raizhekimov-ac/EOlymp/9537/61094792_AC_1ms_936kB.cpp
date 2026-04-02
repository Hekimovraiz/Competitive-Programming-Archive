#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; ++i) {             
        for(int j = 0; j < n; ++j) {         
            cout << a[j][i] << " ";      
        }
        cout << "\n";
    }
}
