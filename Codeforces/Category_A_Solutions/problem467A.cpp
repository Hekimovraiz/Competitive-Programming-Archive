/*
 * Problem: 467A - George and Accommodation
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/467/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 3e5 + 9;
int a[sz];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    vector<pair<int , int>> v;
    while(t--)
    {
        int x , y;
        cin >> x >> y;
        v.push_back({x , y});
    }
    int cnt = 0;

    for(auto i : v)
    {
        if(i.second - i.first >= 2 )
        {
            ++cnt;
        }
    }

    cout << cnt << "\n";
}
