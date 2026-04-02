#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, k;
    string s;
    cin >> n >> k >> s;
    while(k--)
    {
        for (int i = 0; i < (int)s.size() - 1; ++i)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << '\n';
}