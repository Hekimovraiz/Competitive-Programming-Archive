/*
 * Problem: 4281
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/4281
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
    for (int i = 0; i < (int)s.size(); ++i)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        else if ('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    cout << s << ' ';
}
