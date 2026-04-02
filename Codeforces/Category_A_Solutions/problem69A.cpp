/*
 * Problem: 69A - Young Physicist
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/69/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x , y , z , t;
    int x1 = 0, y1 = 0, z1 = 0;

    cin >> t;

    for(int i = 0 ; i < t ; ++i)
    {
        cin >> x >> y >> z;
        x1 += x; 
        y1 += y; 
        z1 += z;
    }

    if(x1 == 0 && y1 == 0 && z1 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }


}

