// Problem ID: 281A
// Platform: Codeforces
// Link: https://codeforces.com/contest/281/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
    string n;
    cin >> n;
    if(n[0] >= 'A' && 'Z' >= n[0])
    {
        cout << n << "
";
    }
    else
    {
    n[0] = n[0] - 32;
    cout << n << "
";
    }
 
}