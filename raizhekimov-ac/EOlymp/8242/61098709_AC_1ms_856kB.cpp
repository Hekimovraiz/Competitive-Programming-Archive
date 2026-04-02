#include <bits/stdc++.h>
#define int long long
using namespace std;

void slove(int x)
{
    if (x > 0)
    {
        cout << "Positive" << "\n";
    }
    else if(x < 0)
    {
        cout << "Negative" << "\n";
    }
    else if(x == 0)
    {
        cout << "Zero" << "\n";
    }
  
}



signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    slove(n);


}