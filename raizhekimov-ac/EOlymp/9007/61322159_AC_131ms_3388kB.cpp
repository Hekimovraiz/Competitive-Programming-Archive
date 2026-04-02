#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    set<int> s;
    while(n--)
    {
        int f;
        cin >> f;
        s.insert(abs(f));
    }
    cout << (int)s.size() << "\n";
    
}
