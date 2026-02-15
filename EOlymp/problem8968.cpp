/*
 * Problem: 8968
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8968
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
    int a[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int max = *max_element(a , a + n) / 2;
    int min = *min_element(a , a + n) / 2;

    int b[n];
    int j = 0;

    for(int i = 0; i < n ; ++i)
    {
        if(a[i] > 0)
        {
            b[j++] = a[i] - max;
        }
        else if(a[i] < 0)
        {
            b[j++] = a[i] - min;
        }
        else
        {
            b[j++] = 0;
        }
    }

    for(int i = 0 ; i < n ; ++i)
    {
        cout << b[i] << " ";
    }
    cout << endl;

}
//7
//14 -10 10 8 11 -9 -6