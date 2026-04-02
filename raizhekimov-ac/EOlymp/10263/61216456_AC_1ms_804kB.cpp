#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int n;
    cin >> n;
    string a[n][3];

    for (int i = 0; i < n; ++i) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i][1] > a[j][1]) {
                swap(a[i], a[j]);
            } else if (a[i][1] == a[j][1]) {
                if (a[i][0] > a[j][0]) {
                    swap(a[i], a[j]);
                } else if (a[i][0] == a[j][0]) {
                    if (stoi(a[i][2]) < stoi(a[j][2])) {
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << "\n";
    }


    
}
