// Problem ID: 1328A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1328/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int a , b; cin >> a >> b;
        if(a % b == 0)
        {
            cout << 0 << "
";
        }
        else
        {
        cout << b - (a % b) << "
";
        }
    }
}