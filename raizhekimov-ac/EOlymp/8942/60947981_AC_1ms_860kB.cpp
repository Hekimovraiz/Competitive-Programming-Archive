#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1 ; i <= 3 ; ++i){
        for (int j = 1; j <= n ; ++j){
            if(i == 1 || i == 3 || j == 1 || j == n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }


}