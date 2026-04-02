#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x;
    cin >> x;
    double y = ((2 * x) / (sqrt(pow(x , 2) + 1))) - ((sqrt(pow(x , 2) + 1)) / (x * x * x));
    cout << fixed << setprecision(3) <<  y << "\n";
    return  0;
}