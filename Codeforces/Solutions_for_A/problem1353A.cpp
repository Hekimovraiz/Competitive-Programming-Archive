// Problem ID: 1353A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1353/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int sz = 3e5 + 9;
const int INF = 1e18;
 
int n, m;
 
void _()
{
    int n, m;
    cin >> n >> m;
    if (n > 2)
    {
        cout << m * 2 << '
';
    }
    else if (n == 1)
    {
        cout << 0 << '
';
    }
    else
    {
        cout << m << '
';
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t = 1;
    cin >> t;
    while(t--)
    {
        _();
    }
}