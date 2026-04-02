#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        int sum = 0;

        for(int j = 0 ; j < n ; ++j)
        {
            sum += a[i][j];
        }
        cout << sum << "\n";
    }
    
}