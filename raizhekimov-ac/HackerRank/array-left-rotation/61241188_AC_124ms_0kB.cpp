#include <bits/stdc++.h>
#define int long long
#define b_s v.begin() , v.end()
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); ios_base::sync_with_stdio(0);
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    for (int i = d; i < n; ++i)
    {
        cout << v[i] << ' ';
    }
    for (int i = 0; i < d; ++i)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}
