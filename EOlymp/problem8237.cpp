/*
 * Problem: 8237
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8237
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long

int sz = 1e3 + 5;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
    }

    for(int t = 0 ; t < n - 1 ; ++t)
    {
        for(int i = 0 ; i < n  - 1 - t; ++i)
        {
            if(a[i] > a[i + 1])
            {
                swap(a[i] , a[i + 1]);
            }
        }

        for(int j = 0 ; j < n ; ++j)
        {
            cout << a[j] << " ";
        }
        cout << "\n";
    }
}