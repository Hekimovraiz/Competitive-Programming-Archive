#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n , m;
    cin >> n >> m;
    int a[n][m] , b[n][m] , c[n][m];

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> b[i][j];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    

}