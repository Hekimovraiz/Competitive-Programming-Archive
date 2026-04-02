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

    int min = a[0];

    for(int i = 0; i < n ; ++i)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    int max = a[0];

    for(int i = 0; i < n ; ++i)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    cout << max - min << "\n";

}
