#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;

signed main()
{
    Lek_Raiz
    int n, k;
    cin >> n >> k;
    
    int t = 240 - k; 
    int s = 0; 
    int cnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        s += 5 * i;
        if (s > t)
        {
            break;
        }
        ++cnt;
    }

    cout << cnt << "\n";
}

