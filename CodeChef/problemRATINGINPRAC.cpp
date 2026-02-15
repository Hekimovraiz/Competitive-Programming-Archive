/*
 * Problem: RATINGINPRAC
 * Platform: CodeChef
 * Link: https://www.codechef.com/problems/RATINGINPRAC
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    for(int x = 0 ; x < t ; ++x)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> v[i];
        }
        vector<int> f = v;
        sort(f.begin() , f.end());
        if (f == v)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}

