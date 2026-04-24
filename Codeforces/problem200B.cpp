/*
 * Problem: 200B - Drinks
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/200/problem/B
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
    int n, sum = 0; cin >> n;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
        sum += i;
    }
    cout << fixed << setprecision(12) << (double)sum / n << "
";
}