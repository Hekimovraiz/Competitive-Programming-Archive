#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int C = abs(n);
    cout << C / 100 << endl;
    cout << (C % 100) / 10 << endl;
    cout << C % 10 << endl;

    return 0;
}