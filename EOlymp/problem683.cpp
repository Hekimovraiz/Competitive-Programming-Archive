/*
 * Problem: 683
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/683
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 1e3 + 5;
int a[sz][sz], dp[sz][sz];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + a[i][j];
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
}