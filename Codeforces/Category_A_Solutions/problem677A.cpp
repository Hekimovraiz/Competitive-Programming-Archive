/*
 * Problem: 677A - Vanya and Fence
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/677/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int n , h;
    cin >> n >> h;
    int a[n];
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
    }
    int sum = 0 ;

    
    for(int i = 0 ; i < n ; ++i)
    {
        if (a[i] > h)
        {
            sum += 2;
        }
        else
        {
            ++sum;
        }
    }

    cout << sum << "\n";
}
