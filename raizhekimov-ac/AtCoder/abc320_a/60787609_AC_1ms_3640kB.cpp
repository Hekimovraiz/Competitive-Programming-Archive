#include <bits/stdc++.h>
using namespace std;
int main(){
    long long A , B;
    cin >> A >> B;
    long long S = 1;
    for (int i = 0; i < B ; i++){
        S *= A;
    }
    long long S1 = 1;
    for (int i = 0; i < A ; i++){
        S1 *= B;
    }
    cout << S + S1 << "\n";
    return 0;
}