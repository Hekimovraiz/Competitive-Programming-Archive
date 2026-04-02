#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int max = a[0];

    for(int i = 0 ; i < n ; ++i)
    {
        if(max < a[i]){
            max = a[i];
        }
    }

    int b[n];
    int j = n - 1;
    int s  = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        if (a[i] == max)
        {
            b[j--] = a[i];
        }
        else
        {
            b[s++] = a[i];
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        cout << b[i] << " ";
    }


}
//7
//6 -2 7 1 7 -1 2
