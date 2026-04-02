#include <bits/stdc++.h>
#define int long long
using namespace std;

int a, b, c;

int f(int n)
{
    if (n == 0)
        return a;
    return f(n - 1) + b * n + c;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    
    int n;
    cin >> a >> b >> c >> n;
    cout << f(n) << "\n";
}
