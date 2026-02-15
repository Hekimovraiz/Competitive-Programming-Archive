/*
 * Problem: 160A - Twins
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/160/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;

    for(auto &i : v) {
        cin >> i;
        total += i;
    }

    sort(v.begin(), v.end());

    int sum1 = 0;
    for(int i = n - 1; i >= 0; --i) {
        sum1 += v[i];
        int sum2 = total - sum1;
        if(sum1 > sum2) {
            cout << n - i << "\n";
            break;
        }
    }
}