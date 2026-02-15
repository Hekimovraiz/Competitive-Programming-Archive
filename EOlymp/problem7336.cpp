/*
 * Problem: 7336
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/7336
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int manat , qepik , eded;
    cin >> manat >> qepik >> eded;
    int K = qepik * eded;
    int A = manat * eded + (K / 100);
    int S = K % 100;
    cout << A << ' ' << S;
    return 0;
}