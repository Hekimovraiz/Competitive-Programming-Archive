/*
 * Problem: 144A - Arrival of the General
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/144/problem/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }
 
    int mx = *max_element(v.begin() , v.end());
    int mn = *min_element(v.begin() , v.end());
    int mxc = 101;
 
    for(int i = 0 ; i < n ; ++i)
    {
        if(v[i] == mx)
        {
            mxc = i;
            break;
        }
    }
    int mnc = 0;
 
    for(int i = n - 1 ; i >= 0 ; --i)
    {
        if(v[i] == mn)
        {
            mnc = i;
            break;
        }
    }
 
    int r = mxc + (n - 1 - mnc);
    if (mxc > mnc)
    {
        r--;
    }
    
    cout << r << "
";
}