#pragma GCC optimize("O3")
#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define ld long double
#define endl '
'
#define S second
#define F first
#define pb push_back
#define all(x) x.begin(), x.end()
 
const int N =  2e5 + 5;
const int sz = 1e3 + 5;
const int mod = 998244353;
const int INF = 1e18;
 
void solve()
{
    int a, b, x = 1, y = 1;
    cin >> a >> b;
    if (b % a == 0) cout << b * (b / a) << endl;
    else {
        for (int i = 2; i * i <= a; i ++) {
            if (a % i == 0) {
                cout << i * b << endl;
                return ;
            }
        }
        cout << a * b << endl;
    }
}
 
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
 
    int T = 1;
    cin >> T;
    while (T --)
    {
        solve();
    }
}