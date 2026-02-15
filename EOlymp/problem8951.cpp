/*
 * Problem: 8951
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8951
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n / 2 ||      // yuxarı sol
                i - j == n / 2 ||      // aşağı sol
                j - i == n / 2 ||      // yuxarı sağ
                i + j == (n - 1) + n / 2)  // aşağı sağ
            {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
