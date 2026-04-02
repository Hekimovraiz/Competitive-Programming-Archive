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

    int max = *max_element(a , a + n);
    int min = *min_element(a , a + n);

    for (int i = 0 ; i < n ; ++i)
    {
        a[i] = a[i] - max + min;
    }

    for(int i = 0 ; i < n ; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
