#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
    int arr[5][5];
 
    for(int i = 0 ; i < 5 ; ++i)
    {
        for(int j = 0 ; j < 5 ; ++j)
        {
            cin >> arr[i][j];
        }
    }
 
    int x = 0, y = 0;
 
    for(int i = 0 ; i < 5 ; ++i)
    {
        for(int j = 0 ; j < 5 ; ++j)
        {
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    int x1 = abs(2 - x) , y1 = abs(2 - y);
 
    cout << x1 + y1 << "
";
 
}