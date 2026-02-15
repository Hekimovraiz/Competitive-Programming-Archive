/*
 * Problem: 9648
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/9648
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 3e5 + 9;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int sum = 0;

    for (int i = a; i <= b; ++i)
    {
        string s = to_string(i);
        sort(s.begin(), s.end());
        sum += stoll(s);
    }

    cout << sum << '\n';
}