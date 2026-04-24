// Problem ID: 896E
// Platform: Codeforces
// Link: https://codeforces.com/contest/896/problem/E

#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3")
using namespace std;//
 
void fast_io()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
void solve()
{
    int n, qr;
    cin >> n >> qr;
 
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }
 
    while (qr--)
    {
        int t, l, r, x;
        cin >> t >> l >> r >> x;
        if (t == 1)
        {
            for (int i = l; i <= r; ++i)
            {
                if (v[i] > x)
                {
                    v[i] -= x;
                }
            }
        }
        else
        {
            int cnt = 0;
            for (int i = l; i <= r; ++i)
            {
                if (v[i] == x)
                {
                    ++cnt;
                }
            }
            cout << cnt << "
";
        }
    }
}
 
int main()
{
    fast_io();
    solve();
}