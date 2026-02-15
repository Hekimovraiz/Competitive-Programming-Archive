/*
 * Problem: 8956
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8956
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int a[t];
    int k = 0;

    for (int i = 0 ; i < t ; ++i)
    {
        cin >> a[i];
    }

    for(int i = 0 ; i < t ; ++i)
    {
        if( a[i] < 0){
            ++k;
        }
    }

    if(k == 0){
        cout << "NO" << "\n";
        return 0;
    }

    int b[k];
    int j = 0;

    for(int i = 0 ; i < t ; ++i)
    {
        if (a[i] < 0){
            b[j++] = a[i]; 
        }
    }

    cout << k << "\n";

    for(int i = k - 1 ; i >= 0 ; --i){
        cout << b[i] << " ";
    }
    cout << "\n";
}