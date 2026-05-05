/*
 * Problem: 61A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/61/problem/A
 */
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    
    string n , s;
    cin >> n >> s;
    for(int i = 0 ; i < (int)s.size() ; ++i)
    {
        if(s[i] != n[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
 
}