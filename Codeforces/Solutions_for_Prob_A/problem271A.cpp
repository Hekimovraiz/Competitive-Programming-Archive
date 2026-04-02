/*
 * Problem: 271A - Beautiful Year
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/271/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int n;
    cin >> n;
    ++n;
    
    while (true)
    {
    int k = 0;
    for(int i = 0 ; i < (int) to_string(n).size() ; ++i)
    {
        for(int j = 0 ; j < (int) to_string(n).size() ; ++j)
        {
            if ( i != j && to_string(n)[i] == to_string(n)[j])
            {
                ++k;
            }
        }
    }
    if (k == 0)
    {
        cout << n << "\n";
        break;
    }
    else
    {
        ++n;
    }
    }
    
}