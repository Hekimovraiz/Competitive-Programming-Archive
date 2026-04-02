#include <bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin >> w;

    cout << (w % 10) * 100 + ((w % 100) / 10) * 10  + (w / 100) * 1 << endl;
    return 0;
}