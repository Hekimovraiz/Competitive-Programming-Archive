/*
 * Problem: 122A - Lucky Division
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/122/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

bool f(int x) {
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7)
            return false;
        x /= 10;
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (f(i) && n % i == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}
