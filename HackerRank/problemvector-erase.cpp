/*
 * Problem: vector-erase
 * Platform: HackerRank
 * Link: https://www.hackerrank.com/challenges/vector-erase/problem
 */

#include <bits/stdc++.h>
#define int long long
#define b_s v.begin() , v.end()
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
    }
    int a , b , c;
    cin >> c;
    v.erase(v.begin() + c - 1);
    cin >> a >> b;
    v.erase(v.begin() + a - 1 , v.begin() + b - 1);
    cout << v.size() << "\n";
    for(int i = 0 ; i < v.size()  ; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;


}

