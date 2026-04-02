#include <bits/stdc++.h>
using namespace std;

#define int long long

int sz = 1e3 + 5;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n][3];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }

    // Bubble sort
    for (int t = 0; t < n - 1; ++t) {
        for (int i = 0; i < n - 1; ++i) {
            if (a[i][0] > a[i + 1][0]) {
                swap(a[i], a[i + 1]);
            } else if (a[i][0] == a[i + 1][0]) {
                if (a[i][1] > a[i + 1][1]) {
                    swap(a[i], a[i + 1]);
                } else if (a[i][1] == a[i + 1][1]) {
                    if (a[i][2] > a[i + 1][2]) {
                        swap(a[i], a[i + 1]);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
