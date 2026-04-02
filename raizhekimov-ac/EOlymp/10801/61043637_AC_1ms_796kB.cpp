#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        int sum = 0;
        for (char c : n) 
        {
            sum += c - '0';  
        }
        cout << sum << "\n";
    }

    return 0;
}
