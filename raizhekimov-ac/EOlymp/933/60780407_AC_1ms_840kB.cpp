#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n = abs(n);
    cout << n % 10 + n / 10;
    return 0;
}