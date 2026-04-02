#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 2e5 + 9;
string a[sz];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    if(n % 2 == 0)
    {
        cout << n / 2 << "\n";
    }
    else
    {
        cout << -1 * (n + 1) / 2  << "\n";
    }
}