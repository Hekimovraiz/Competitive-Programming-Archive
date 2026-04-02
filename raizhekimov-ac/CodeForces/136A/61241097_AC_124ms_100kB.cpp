#include <bits/stdc++.h>
#define int long long
#define b_s v.begin() , v.end()
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> res(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        res[v[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << ' ';
    }
    cout << endl;
}
