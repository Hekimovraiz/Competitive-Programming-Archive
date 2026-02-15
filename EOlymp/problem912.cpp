/*
 * Problem: 912
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/912
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    s += " ";
    int res = 0;

    for (int i = 0; i < (int)s.size() - 1; ++i)
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            if (s[i + 1] == ' ')
            {
                res++;
            }
        }
    }

    cout << res << '\n';
}