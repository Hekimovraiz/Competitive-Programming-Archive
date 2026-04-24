/*
 * Problem: 177A2 - Good Matrix Elements
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/177/problem/A2
 */

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;
 
signed main()
{
    Lek_Raiz
    int n; cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            cin >> a[i][j];
        }
    }
    
    int sum = 0;
    int mid = n / 2;
    
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            if(i == j || i + j == n - 1 || i == mid || j == mid)
            {
                sum += a[i][j];
            }
        }
    }
 
    cout << sum << "
";
 
}