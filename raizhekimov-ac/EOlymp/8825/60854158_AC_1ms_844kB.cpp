#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x;
    cin >> x;
    double y = (pow(x , 3)) -((5 * pow(x , 2)) / 7 )  + (9 * x)  - (3 / x) + 1;
    cout << fixed << setprecision(3) <<  y << "\n";
    return  0;
}