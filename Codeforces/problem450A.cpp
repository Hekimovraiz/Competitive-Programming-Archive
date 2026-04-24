/*
 * Problem: 450A - Jzzhu and Children
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/450/problem/A
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int a[n];
    vector<int> v;
    int mx = INT_MIN;
    map<int, vector<int>> mp;
    bool flag = true;
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
 
        if (a[i] > m) {
            flag = false;
        }
        
        mp[(a[i] + m - 1) / m].push_back(i + 1);
 
        if ((a[i] + m - 1) / m > mx) {
            mx = (a[i] + m - 1) / m;
        }
    }
 
    if (flag) {
        cout << n << "
";
    } else {
        cout << mp[mx].back() << "
";
    }
}