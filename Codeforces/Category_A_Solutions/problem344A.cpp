/*
 * Problem: 344A - Magnets
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/344/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 2e5 + 9;
string a[sz];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0 ; i < t ; ++i)
    {
        cin >> a[i];
    }

    int cnt = 1;
    for (int i = 1 ; i < t ; ++i)
    {
        if (a[i] != a[i - 1])
        {
            ++cnt;
        }
    }

    cout << cnt << "\n";
}
