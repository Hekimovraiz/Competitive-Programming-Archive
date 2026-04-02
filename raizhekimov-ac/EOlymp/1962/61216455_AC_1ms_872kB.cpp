#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int n; cin >> n;
    int a[n][2];
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for(int j = 0; j < n-1; ++j) {
        for(int i = 0; i < n - 1 - j; ++i) {
            if(a[i][1] < a[i+1][1]) {
                swap(a[i], a[i+1]);
            }
            else if(a[i][1] == a[i+1][1]) {
                if (a[i][0] > a[i+1][0]) {
                    swap(a[i], a[i+1]);
                }
            }
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        cout << a[i][0] << " " << a[i][1] << "\n";
    }
}

