/*
 * Problem: 38A - Army
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/38/A
 */

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;

signed main()
{
    Lek_Raiz
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (auto &i : v)
        cin >> i;
    
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a - 1; i < b - 1; ++i)
    {
        sum += v[i];
    }

    cout << sum << "\n";
}
