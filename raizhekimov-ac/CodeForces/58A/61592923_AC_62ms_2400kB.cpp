#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 3e5 + 9;
int a[sz];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    string s;
    cin >> s;

    if (s.size() < 5) {
        cout << "NO\n";
        return 0;
    }

    for(int i = 0 ; i < s.size() ; ++i)
    {
        if(s[i] == 'h')
        {
            for(int j = i + 1 ; j < s.size() ; ++j)
            {
                if(s[j] == 'e')
                {
                    for(int w = j + 1 ; w < s.size() ; ++w)
                    {
                        if(s[w] == 'l')
                        {
                            for(int k = w + 1 ; k < s.size() ; ++k)
                            {
                                if(s[k] == 'l')
                                {
                                    for(int f = k + 1 ; f < s.size() ; ++f)
                                    {
                                        if(s[f] == 'o')
                                        {
                                            cout << "YES" << "\n";
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "NO" << "\n";
}
