#include <bits/stdc++.h>
#define int long long
using namespace std;

void slove(double x)
{
    cout << fixed << setprecision(4) << sqrt(x) + 2 * x  + sin(x) << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    double n;
    while(cin >> n)
    {
    slove(n);
    }
}