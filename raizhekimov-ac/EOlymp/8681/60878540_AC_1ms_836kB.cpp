#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    int k = 1;
    while(n != 0){
        int s = n % 10;
        if(s != 0){
            k *= s;
        }
        n /= 10;
    }
    cout << k;
    return 0;
}