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
    int max_index = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        if(a[i] >= max)  
        {
            max = a[i];
            max_index = i;
        }
    }

    swap(a[n - 1], a[max_index]);

    for (int i = 0 ; i < n ; ++i)
    {
        cout << a[i] << " ";
    }

    cout << "\n";
}
