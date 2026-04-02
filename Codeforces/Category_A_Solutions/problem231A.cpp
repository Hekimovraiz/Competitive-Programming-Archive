/*
 * Problem: 231A - Team
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/231/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int n;
    cin >> n;
    int a[n][3];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> a[i][j];
        }
    }
    
    int ans = 0;
    

    for (int i = 0; i < n; ++i)
    {
        int k = 0;

        for (int j = 0; j < 3; ++j)
        {
            if (a[i][j] == 1)
            {
                ++k;
            }
        }

        if (k >= 2)
        {
            ++ans;
        }
    }

    cout << ans << "\n";
}
