/*
 * Problem: 494
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/494
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string n;
    getline(cin , n);
    int k = 0;
    for (int i = 0 ; i < (int) n.size() ; ++i){
        if(n[i] == 'A' || n[i] == 'E' ||n[i] == 'I' ||n[i] == 'O' ||n[i] == 'U' ||n[i] == 'Y'){k++;}
    }
    cout << k;
}