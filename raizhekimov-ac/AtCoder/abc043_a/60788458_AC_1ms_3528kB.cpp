#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N;
    cin >> N;
    long long K = 0;
    for (int i = 0; i < N + 1 ; i++){
        K += i;
    }
    cout << K;
    return 0;
}