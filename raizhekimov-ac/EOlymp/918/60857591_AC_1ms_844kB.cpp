#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x , y;
    cin >> x >> y ;

    if (x == 0 || y == 0) {
        cout << 0;
    }
    else if(x > 0 && y > 0){
        cout << 1 << "\n";
    }
    else if(x < 0 && y > 0){
        cout << 2 << "\n";
    }
    else if(x < 0 && y < 0){
        cout << 3 << "\n";
    }
    else if(x > 0 && y < 0){
        cout << 4 << "\n";
    }

    return  0;
}
