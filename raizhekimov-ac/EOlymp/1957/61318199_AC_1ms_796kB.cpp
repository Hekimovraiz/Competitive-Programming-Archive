#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }

    sort(v.begin() , v.end());
    for(int i = n - 1 ; i > 0 ; --i)
    {
        if(v[i] != *max_element(v.begin() , v.end()))
        {
            cout << v[i] << "\n";
            break;
        }
    }

}
