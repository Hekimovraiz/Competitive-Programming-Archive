/*
 * Problem: 922
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/922
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 2e5 + 9; 
int a[sz];

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i : v)
    {
        cin >> i;
    }
    cout << v[v.size() - 1] << " ";
    v.pop_back();
    for(auto i : v)
    {
        cout << i << " ";
    }
    cout << "\n";
}
