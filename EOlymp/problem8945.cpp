/*
 * Problem: 8945
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8945
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n , m;
    cin >> n >> m;

    for (int i = 1 ; i <= n ; ++i){
        for (int j = 1; j <= m ; ++j){
            if(i == 1 || i == n || j == 1 || j == m){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }


}