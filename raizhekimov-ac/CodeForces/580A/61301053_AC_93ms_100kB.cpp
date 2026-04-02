#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    int max_len = 1 , len = 1; 

    for(int i = 0 ; i < n - 1 ; ++i)
    {
        if(v[i] <= v[i + 1])
        {
            ++len;
        }
        else
        {
            len = 1;
        }
        max_len = max(max_len , len);
    }

    cout << max_len << "\n";
}
