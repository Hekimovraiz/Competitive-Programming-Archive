#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    int n = 0;
    for(int i = 0 ; i < (int)s.size() ; ++i)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            ++n;
        }
    }
    if(n > 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
