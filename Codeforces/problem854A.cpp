/*
 * Problem: 854A - Fraction
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/854/problem/A
 */

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;
 
signed main()
{
    Lek_Raiz
    int n;
    cin >> n;
    int max1 = 0 , max2 = 1; 
    for (int a = 1; a < n; ++a)
    {
        int b = n - a;
        if (a < b && __gcd(a, b) == 1)
        {
            if (a * max2 > max1 * b)
            {
                max1 = a;
                max2 = b;
            }
        }
    }
 
    cout << max1 << " " << max2 << "
";
}