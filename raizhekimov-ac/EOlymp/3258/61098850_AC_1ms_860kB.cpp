#include <bits/stdc++.h>
#define int long long
using namespace std;

int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a[n + 1]; 
    a[0] = 0;
    a[1] = 1;
    for (int k = 2; k <= n; ++k)
    {
        a[k] = a[k - 1] + a[k - 2];
    }
    return a[n];
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    cout << fib(n) << "\n";
}
