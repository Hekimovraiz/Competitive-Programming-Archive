#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 3e5 + 9;
int a[sz];

int n;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    for (int x = 1; x <= n; ++x)
    {
        for (int i = 1; i < n; ++i)
        {
            if ((a[i] % 10) > (a[i + 1] % 10))
            {
                swap(a[i], a[i + 1]);
            }
            else if ((a[i] % 10) == (a[i + 1] % 10))
            {
                if (a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}