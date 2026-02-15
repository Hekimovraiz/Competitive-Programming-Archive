/*
 * Problem: 915
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/915
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int a , b, c;
    cin >> a >> b >> c;
    if(max(a , max(b , c)) == a && b * b + c * c == a * a){
        cout << "YES\n" ; 
    }
    else if (max(a , max(b , c)) == b && a * a + c * c == b * b){
        cout << "YES\n" ;
    }
    else if( max(a , max(b , c)) == c && b * b + a * a == c * c){
        cout << "YES\n" ;
    }
    else{
        cout << "NO";
    }
    return  0;
}