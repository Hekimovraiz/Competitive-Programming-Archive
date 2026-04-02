#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n][n];
    int k = 1;
    int sum = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            cin >> a[i][j];
        }
    }
    int l = 0 , r = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            if(i == j)
            {
                l += a[i][j];
            }
            if(i + j == n - 1)
            {
                r += a[i][j];
            }
        }
    }

    cout << l << " " << r << "\n";
}
