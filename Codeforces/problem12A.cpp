/*
 * Problem: 12A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/12/problem/A
 */
#include <bits/stdc++.h>
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
signed main()
{
    Lek_Raiz
    char a[3][3];
    string k = "" , n = "" , l = "";
    for(int i = 0 ; i < 3 ; ++i)
    {
        for(int j = 0 ; j < 3 ; ++j)
        {
            cin >> a[i][j];
            if(j == 1)
            {
                k += a[i][j];
            }
            if(j == 0)
            {
                l += a[i][j];
            }
            if(j == 2)
            {
                n += a[i][j];
            }
        }
    }
    reverse(l.begin() , l.end());
    string ss = k;
    reverse(ss.begin() , ss.end());
    if(n == l && ss == k)
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
";
    }
}