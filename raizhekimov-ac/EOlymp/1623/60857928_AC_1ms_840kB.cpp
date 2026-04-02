#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int a , b, c;
    cin >> a >> b >> c;
    int tek = (a % 2 != 0) + (b % 2 != 0) + (c % 2 != 0);
    int cut = 3 - tek;
    if(tek > 0 && cut >> 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return  0;
}