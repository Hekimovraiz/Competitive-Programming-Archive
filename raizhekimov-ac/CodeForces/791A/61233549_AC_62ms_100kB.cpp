#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int a , b;
    cin >> a >> b;
    int c = 0;

    while(a <= b)
    {
        a *= 3;
        b *= 2;
        ++c;
    }

    cout << c << "\n";
}
