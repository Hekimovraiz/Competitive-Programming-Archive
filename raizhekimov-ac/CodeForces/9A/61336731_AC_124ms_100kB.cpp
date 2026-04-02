#include <bits/stdc++.h>
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

signed main()
{
    Lek_Raiz
    int x , y;
    cin >> x >> y;
    int k = 6 - (max(x , y)) + 1, s = 6;
    if(k == 6)
    {
        cout << "1/1\n";
    }
    else if(k == 0)
    {
        cout << "0/1\n";
    }
    else
    {
        int f = gcd(k , s);
        k = k / f;
        s = s / f;
        cout << k << "/" << s << "\n";
    }
}
