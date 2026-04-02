#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x;
    cin >> x;
    double y = ((pow(x , 2) + 3 * x - 4) / (2 * x - 3)) - ((x + 2) / (pow(x , 2) - 5 * x + 7));
    cout << fixed << setprecision(3) <<  y << "\n";
    return  0;
}