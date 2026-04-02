#include <bits/stdc++.h>
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

signed main()
{
    Lek_Raiz
    int t; 
    cin >> t;

    while(t--)
    {
        int x , y , k;
        cin >> x >> y >> k;
        
        int diff = abs(x - y);
        int sum = x + y;

        if(k > sum || (sum - k) % 2 != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        if(diff == k)
        {
            cout << 0 << "\n";
        }
        else if(diff > k)
        {
            int cnt = 0;
            while(abs(x - y) > k)
            {
                if(x > y)
                {
                    x--;
                    y++;
                }
                else
                {
                    x++;
                    y--;
                }
                cnt++;
            }
            cout << cnt << "\n";
        }
        else 
        {
            int cnt = 0;
            while(abs(x - y) < k)
            {
                if(x > y)
                {
                    x++;
                    y--;
                }
                else
                {
                    x--;
                    y++;
                }
                cnt++;
            }
            cout << cnt << "\n";
        }
    }
}
