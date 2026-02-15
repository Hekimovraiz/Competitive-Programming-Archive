/*
 * Problem: 8987
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8987
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string n;
    getline(cin , n);

    for (int i = 0 ; i < (int) n.size(); ++i){
        if(n[i] == 'a'){
            cout << 'b';
        }
        else if(n[i] == 'b'){
            cout <<'a';
        }
        else {
            cout << n[i];
        }
    }


}