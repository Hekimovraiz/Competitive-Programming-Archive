/*
 * Problem: 8958
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8958
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    int k = 0;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0 ; i < n ; ++i){
        if (i % 2 != 0){
            ++k;
        }
    }

    if (k == 0){
        cout << "NO\n";
        return 0;
       
        
    }
    int b[k];
    int j = 0;

    for(int i = 0 ; i < n ; ++i){
        if(i % 2 != 0){
            b[j++] = a[i];
        }
    }

    cout << k << "\n";

    for(int i = 0 ; i < k ; ++i){
        cout << b[i] << " ";
    }
    cout << "\n";

}