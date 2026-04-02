#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x , y;
    cin >> x >> y;
    double s = (2 * pow(x , 2)) - (4 * x * y) +(3 * pow(y , 2)) + (x + y) / 7;
    cout << fixed << setprecision(3) <<  s << "\n";
    return  0;
}
