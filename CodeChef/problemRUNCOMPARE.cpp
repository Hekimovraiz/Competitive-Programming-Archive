/*
 * Problem: RUNCOMPARE
 * Platform: CodeChef
 * Link: https://www.codechef.com/problems/RUNCOMPARE
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
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> b[i];
        }
        int day = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            if((a[i] > b[i] && a[i] <= b[i] * 2) || (a[i] < b[i] && b[i] <= a[i] * 2) || (a[i] == b[i]))
            {
                ++day;
            }
        }
        cout << day << "\n";
    }
}
