#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int k;
    cin >> k;

    for (int i = 1; ; ++i)
    {
        if ((i * (i + 1) / 2) % k == 0)
        {
            cout << i << '\n';
            break;
        }
    }
}