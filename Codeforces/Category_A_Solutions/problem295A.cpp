/*
 * Problem: 295A
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/295/A
 */

#include <bits/stdc++.h>
/// #include "AkbarKING.h"
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using namespace std;

const int sz = 3e5 + 9;
const int INF = 1e18;
int a[sz], b[sz], l[sz], r[sz], d[sz], pref[sz];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; ++i)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    while(k--)
    {
        int x, y;
        cin >> x >> y;
        pref[x]++;
        pref[y + 1]--;
    }
    for (int i = 2; i <= m; ++i)
    {
        pref[i] += pref[i - 1];
    }
    for (int i = 1; i <= m; ++i)
    {
        b[l[i]] += d[i] * pref[i];
        b[r[i] + 1] -= d[i] * pref[i];
    }
    for (int i = 2; i <= n; ++i)
    {
        b[i] += b[i - 1];
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] + b[i] << " ";
    }
    cout << '\n';
}