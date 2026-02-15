/*
 * Problem: 911
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/911
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int a , b , c , Discriminant;
    cin >> a >> b >> c;

    Discriminant = (b * b) - 4 * a * c;

    if(Discriminant < 0){
        cout << "No roots\n";
    }
    else if(Discriminant == 0){
        int x = (-b) / (2 * a);
        cout << "One root: " << x << "\n";
    }
    else {
        int x1 = ((-b) + sqrt(Discriminant)) / (2 * a);
        int x2 = ((-b) - sqrt(Discriminant)) / (2 * a);
        cout << "Two roots: " << min(x1 , x2) << " " << max(x1 , x2) << "\n";
    }
}
