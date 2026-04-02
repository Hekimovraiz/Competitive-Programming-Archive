#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string n;
    int sum = 0;
    cin >> n;

    for( auto k : (n))
    {
        sum += k - '0';
    }

    if(sum % 3 == 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    if((n.back() - '0') % 2 == 0 && sum % 3 == 0 )
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    if(sum % 9 == 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
