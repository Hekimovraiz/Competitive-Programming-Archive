#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    double x;
    cin >> x;
    double y = (sqrt(pow(x , 4) + 1) / pow(x , 2)) - sqrt(pow(x , 2) / (pow(x , 2) + 1));
    cout << fixed << setprecision(3) <<  y << "\n";
    return  0;
}