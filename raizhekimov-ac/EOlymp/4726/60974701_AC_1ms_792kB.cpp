#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string n;
    getline(cin , n);
    int k = 0; 

    for (int i = 0 ; i < (int) n.size() ; ++i ){
        if (n[i] == 'f'){
            k ++;
        }
    }
    if(k == 1){
        cout << n.find('f') << "\n";
    }
    else if(k > 1){
        cout << n.find('f') << " " << n.rfind('f') << "\n";
    }
}