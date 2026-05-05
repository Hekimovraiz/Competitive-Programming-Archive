/*
 * Problem: 1971G
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1971/problem/G
 */
#include <bits/stdc++.h>
#define int long long
using namespace std; /// AkbarKING'den cirmisham,PALET ELEMEYIN
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> mp;
    for (int &i : a)
    {
        cin >> i;
        mp[i >> 2].push_back(i);
    }
    for (auto &x : mp)
    {
        sort(x.second.rbegin(), x.second.rend());
    }
    for (int i = 0; i < n; ++i)
    {
        cout << mp[a[i] >> 2].back() << " 
"[i == n - 1];
        mp[a[i] >> 2].pop_back();
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
 
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
}