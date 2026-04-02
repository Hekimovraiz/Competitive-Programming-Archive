#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int h , w , l , k ;
    cin >> h >> w >> l >> k ;
    int x = h * w * l;
    cout << (x + k - 1) / k;
    return 0;
}
