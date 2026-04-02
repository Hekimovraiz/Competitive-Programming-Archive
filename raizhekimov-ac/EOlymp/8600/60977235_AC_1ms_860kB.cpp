#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n , sum = 0 , d = 1;
    cin >> n;
    while (n != 0){
        int s = n % 10;
        sum += s;
        d *= s;
        n /= 10;
    }
    cout << sum << " " << d << "\n";
}
