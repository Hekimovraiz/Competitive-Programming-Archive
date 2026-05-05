/*
 * Problem: 158A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/158/problem/A
 */
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int n , k;
    cin >> n >> k;
    int arr[n];
 
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }
 
    int s = arr[k - 1];
    int f = 0;
 
    for(auto i : arr)
    {
        if (i >= s && i >  0)
        {
            ++f;
        }
    }
 
    cout << f << "
";
 
    
}