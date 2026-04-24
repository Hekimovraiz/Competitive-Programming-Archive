/*
 * Problem: 339A - Helpful Maths
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/339/problem/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
 
    string s , k = "";
    cin >> s;
 
    for(int i = 0 ; i < (int) s.size() ; ++i){
        if(s[i] != '+'){
            k += s[i];
        }
    }
    sort(k.begin() , k.end());
    for(int j = 0 ; j < (int) k.size() ; ++j){
        if (j != (int) k.size() - 1){
            cout << k[j] << '+';
        }
        else{
            cout << k[j] << "
";
        }
    }
 
}