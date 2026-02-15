/*
 * Problem: UWCOI20A
 * Platform: CodeChef
 * Link: https://www.codechef.com/problems/UWCOI20A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int t, N;
    cin >> t;
    for (int x = 0; x < t; ++x) {
        cin >> N;
        vector<int> v(N);
        for (int i = 0; i < N; ++i) {
            cin >> v[i];
        }
        auto f = max_element(v.begin(), v.end());
        cout << *f << "\n";  
    }
}
