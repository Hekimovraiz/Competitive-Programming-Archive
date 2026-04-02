#include <bits/stdc++.h>
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

signed main()
{
    Lek_Raiz
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);

    for(int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        a[i] = a[i - 1] + x;
    }

    while(q--)
    {
        int c, b;
        cin >> c >> b;
        cout << a[b] - a[c - 1] << "\n";
    }
}
