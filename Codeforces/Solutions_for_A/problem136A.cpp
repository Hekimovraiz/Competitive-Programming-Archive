/*
 * Problem: 136A
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/136/A
 */

#include <bits/stdc++.h>
#define int long long
#define b_s v.begin() , v.end()
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    vector<int> res(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (v[j] == i + 1)
            {
                res[i] = j + 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << ' ';
    }
    cout << endl;
}

