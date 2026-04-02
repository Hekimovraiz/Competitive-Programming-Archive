/*
 * Problem: 71A - Way Too Long Words
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/71/A
 */

#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore(); 

    for (int i = 1 ; i <= n ; ++i){
        string S;
        getline(cin , S);
        if ((int) S.size() <= 10) {
            cout << S << "\n";
        } else {
            cout << S[0] << to_string((int) S.size() - 2) << S.back() << "\n";
        }
    }

    return 0;
}