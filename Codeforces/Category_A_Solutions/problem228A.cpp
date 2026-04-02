/*
 * Problem: 228A - Is your horseshoe on the other hoof?
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/228/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    
    int n;
    vector<int> v;
    while(cin >> n)
    {
        v.push_back(n);
    }
    set<int> s;
    for(auto &i : v)
    {
        s.insert(i);
    }
    cout << v.size() - s.size() << "\n";
}
