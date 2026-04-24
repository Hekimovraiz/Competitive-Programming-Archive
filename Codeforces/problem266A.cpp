#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
 
    for (int i = 0 ; i < n - 1 ; ++i)
    {
        if(s[i] == s[i + 1])
        {
            c++;
        }
    }
 
    cout << c << '
';
}