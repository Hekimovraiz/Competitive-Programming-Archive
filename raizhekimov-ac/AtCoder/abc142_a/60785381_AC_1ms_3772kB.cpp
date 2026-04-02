#include <bits/stdc++.h>
using namespace std;
int main(){
    float a;
    cin >> a;
    float d = 0;
    for(int i = 0; i <= a ; i++){
        if(i % 2 == 1){d += 1;}
    }
    cout << d / a;
}