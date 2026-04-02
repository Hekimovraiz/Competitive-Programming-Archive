#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    int say = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j) 
        {
            cout << say << " ";
            ++say;
        }
        cout << "\n";
    }
}
