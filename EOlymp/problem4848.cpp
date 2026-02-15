/*
 * Problem: 4848
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/4848
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 2e5 + 9; 
int a[sz];

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    vector<int> v;
    int n;
    while(cin >> n)
    {
        int x = n;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    for(auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
