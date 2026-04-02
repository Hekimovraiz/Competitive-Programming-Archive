#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int mid = (n + 1) / 2;
    int l = mid, r = mid;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (l <= j && j <= r)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
        if (i < mid)
        {
            --l;
            ++r;
        }
        else
        {
            ++l;
            --r;
        }
    }
}