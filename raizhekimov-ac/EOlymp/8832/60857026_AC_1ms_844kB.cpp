#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x , y;
    cin >> x >> y;
    double s = ((x * x - 2 * x * y  + 4 * y * y) / (x + 5)) + ((3 * x * x - y * y) / (y - 7));
    cout << fixed << setprecision(3) <<  s << "\n";
    return  0;
}