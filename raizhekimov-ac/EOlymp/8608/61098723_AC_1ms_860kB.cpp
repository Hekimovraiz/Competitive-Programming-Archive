#include <bits/stdc++.h>
#define int long long
using namespace std;

void sgn(int x)
{
    if (x > 0)
    {
        cout << 1 << "\n";
    }
    else if(x < 0)
    {
        cout << -1 << "\n";
    }
    else if(x == 0)
    {
        cout << 0 << "\n";
    }
  
}



signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    sgn(n);


}