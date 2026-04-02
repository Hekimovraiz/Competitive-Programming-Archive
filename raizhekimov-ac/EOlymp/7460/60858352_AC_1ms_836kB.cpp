#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n , m , k;
    cin >> n >> m >> k;
    int x = (n + k - 1) / k;
    int y = (m + k - 1) / k;
    cout << x + y << "\n";
    return 0;
}
