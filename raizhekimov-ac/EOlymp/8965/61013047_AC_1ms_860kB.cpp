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

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int mn = *min_element(a, a + n);
    mn /= 2;

    for (int i = 0 ; i < n; ++i)
    {
        a[i] -= mn;
    }

    for (int i = 0 ; i < n; ++i)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}