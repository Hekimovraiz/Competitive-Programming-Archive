// Problem ID: 148A
// Platform: Codeforces
// Link: https://codeforces.com/contest/148/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0) ; cin.tie(nullptr) ; cout.tie(nullptr);
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
 
    int a = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            a++;
    }
 
    cout << a << '
';
}