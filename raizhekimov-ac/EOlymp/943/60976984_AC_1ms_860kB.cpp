#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a = n / 100, b = n / 10 % 10, c = n % 10;
    cout << c * 100 + b * 10 + a << '\n';
}
