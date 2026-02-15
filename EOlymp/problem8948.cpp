/*
 * Problem: 8948
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8948
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == j || i + j == n + 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << '\n';
    }
}