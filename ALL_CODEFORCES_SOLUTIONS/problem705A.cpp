// Problem ID: 705A
// Platform: Codeforces
// Link: https://codeforces.com/contest/705/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
 
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            cout << "I hate";
        } else {
            cout << "I love";
        }
 
        if (i == n) {
            cout << " it";
        } else {
            cout << " that ";
        }
        }
}