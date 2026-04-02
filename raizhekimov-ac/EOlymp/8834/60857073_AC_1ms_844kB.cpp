#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x , y;
    cin >> x >> y;
    double s = ((2 * x * y) / sqrt(x * x + y * y) - ((pow(x + y - 1 , 2)) / (x * y)));
    cout << fixed << setprecision(3) <<  s << "\n";
    return  0;
}