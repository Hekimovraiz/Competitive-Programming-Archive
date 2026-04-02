#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 1e3 + 9;
int a[sz];

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i];
    }

    int cnt = 0;
    for(int i = 0 ; i < n - 1 ; ++i) {
        for(int j = 0 ; j < n - i - 1 ; ++j) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ++cnt;
            }
        }
    }

    cout << cnt << "\n";
}
