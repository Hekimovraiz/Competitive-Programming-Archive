/*
 * Problem: 927
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/927
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);  cout.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int , double>> v;

    for(int i = 0 ; i < n ; ++i)
    {
        int x;
        double y;
        cin >> x >> y;
        v.push_back({x , y});
    }
    int cnt = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        if(v[i].second < 50)
        {
            cnt += v[i].first;
        }
    }

    cout << cnt << "\n";

}



