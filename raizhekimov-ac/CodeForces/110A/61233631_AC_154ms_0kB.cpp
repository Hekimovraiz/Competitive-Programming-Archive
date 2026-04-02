#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(nullptr); 
    cout.tie(nullptr);

    string s;
    cin >> s;
    int k = 0;


    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            ++k;
        }
    }


    string k_str = to_string(k);
    bool lucky = true;
    for (int i = 0; i < (int)k_str.size(); ++i)
    {
        if (k_str[i] != '4' && k_str[i] != '7')
        {
            lucky = false;
            break;
        }
    }

    if (lucky && k > 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}

