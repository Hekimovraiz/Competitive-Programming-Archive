#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string n;
    getline(cin , n);

    char t;
    cin >> t;

    int k = 0;
    for(int i = 0; i < (int) n .size() ; ++i){
        if (n[i] == t || n[i] == t - 32){
            k += 1;
        }
    }
    cout << k << "\n";
}
