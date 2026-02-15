/*
 * Problem: 8943
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8943
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

    for (int i = 1 ; i <= n ; ++i){
        for (int j = 1; j <= 3 ; ++j){
            if(i == n || i == 1 || j == 3 || j == 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }


}