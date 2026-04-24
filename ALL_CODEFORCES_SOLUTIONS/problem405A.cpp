/*
 * Problem: 405A - Gravity Flip
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/405/problem/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int sz = 101;
 
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    for(auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}