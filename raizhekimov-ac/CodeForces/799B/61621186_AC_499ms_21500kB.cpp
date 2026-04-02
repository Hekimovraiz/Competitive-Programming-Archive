#include <bits/stdc++.h>
/// #include "AkbarKING.h"
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using namespace std;

const int sz = 2e5 + 9;
const int INF = 1e18;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    map<int, set<int>> mp;
    for(int i = 1; i <= n; ++i)
    {
        cin >> p[i];
    }
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        mp[a[i]].insert(p[i]);
    }
    for(int i = 1; i <= n; ++i)
    {
        cin >> b[i];
        mp[b[i]].insert(p[i]);
    }

    int q;
    cin >> q;
    while(q--)
    {
        int qx;
        cin >> qx;
        if (mp[qx].empty())
        {
            cout << "-1 ";
        }
        else
        {
            int val = *mp[qx].begin();
            cout << val << ' ';
            mp[1].erase(val);
            mp[2].erase(val);
            mp[3].erase(val);
        }
    }
}