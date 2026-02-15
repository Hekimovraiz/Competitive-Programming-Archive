/*
 * Problem: 4735
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/4735
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    char last = n.back();
    
    if (last == '0' || last == '5') cout << "Yes\n";
    else cout << "No\n";

    if (last == '0') cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
