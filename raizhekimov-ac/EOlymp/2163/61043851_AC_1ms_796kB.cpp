#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string n;
    cin >> n;
    int sum = 0;

    for(auto ch : n)
    {
        sum += ch - '0';
    }
    if(sum % 3 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}