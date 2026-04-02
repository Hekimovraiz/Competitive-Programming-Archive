#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) % 3 != 0)
    {
        cout << "IMPOSSIBLE" << '\n';
    }
    else
    {
        int target = (a + b + c) / 3;
        int cem = 0;
        if (a >= target)
        {
            cem += a - target;
        }
        if (b >= target)
        {
            cem += b - target;
        }
        if (c >= target)
        {
            cem += c - target;
        }
        cout << cem << '\n';
    }
}