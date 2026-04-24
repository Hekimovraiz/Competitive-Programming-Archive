/*
 * Problem: 112A - Petya and Strings
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/112/problem/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
 
    string s, t;
    cin >> s >> t;
    for (auto &ch : s)
    {
        ch = tolower(ch);
    }
    for (auto &ch : t)
    {
        ch = tolower(ch);
    }
    if (s == t)
    {
        cout << "0
";
    }
    else if (s > t)
    {
        cout << "1
";
    }
    else
    {
        cout << "-1
";
    }
}