#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int a , b ,c;
    cin >> a >> b >> c;
    cout << min({a , b , c}) + max({a , b , c});
    return 0;
}
