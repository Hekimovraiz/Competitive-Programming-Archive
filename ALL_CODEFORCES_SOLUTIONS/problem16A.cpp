// Problem ID: 16A
// Platform: Codeforces
// Link: https://codeforces.com/contest/16/problem/A

#include <bits/stdc++.h>
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
signed main()
{
    Lek_Raiz
    int m , n;
    cin >> m >> n;
    char a[m][n];
    for(int i = 0 ; i < m ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            cin >> a[i][j];
        }
    }
 
    for(int i = 0 ; i < m ; ++i)
    {
 
        for(int j = 1 ; j < n ; ++j)
        {
            if(a[i][j] != a[i][0])
            {
                cout << "NO
";
                return 0;
            }
        }
 
        if(i > 0 && a[i][0] == a[i-1][0])
        {
            cout << "NO
";
            return 0;
        }
    }
 
    cout << "YES
";
}