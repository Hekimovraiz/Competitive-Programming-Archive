/*
 * Problem: vector-sort
 * Platform: HackerRank
 * Link: https://www.hackerrank.com/challenges/vector-sort/problem
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
    for(int i = 0 ; i < n ;  ++i)
    {
        cin >> v[i];
    }
    sort(b_s);
    for(int i = 0 ; i < n ;  ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

}

