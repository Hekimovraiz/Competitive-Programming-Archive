/*
 * Problem: 8986
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/8986
 */

    #include <bits/stdc++.h>
    #define int long long
    using namespace std;

    signed main(){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);

        string n;
        getline(cin ,n);
        int k , m;
        cin >> k >> m;

        n.erase(k , m - k + 1);
        cout << n;

    }