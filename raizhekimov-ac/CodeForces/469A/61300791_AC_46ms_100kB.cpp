#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int t, a, b;
    cin >> t;

    set<int> s;

    cin >> a;
    for (int i = 0; i < a; ++i) {
        int level;
        cin >> level;
        s.insert(level);
    }

    cin >> b;
    for (int i = 0; i < b; ++i) {
        int level;
        cin >> level;
        s.insert(level);
    }

    if ((int)s.size() == t) {
        cout << "I become the guy.\n";
    } else {
        cout << "Oh, my keyboard!\n";
    }
}
