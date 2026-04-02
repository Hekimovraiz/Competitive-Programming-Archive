#include <bits/stdc++.h>
#define int long long
#define all(v) (v.begin() , v.end())
using namespace std;

const int sz = 2e5 + 9;
string a[sz];

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
    for(int i = 0 ; i < n ; ++i)
    {
        int cnt = 0;
        for(int j = 0 ; j < n ; ++j)
        {
            if(i != j && v[i] == v[j])
            {
                ++cnt;
            }
        }
        if(cnt == 0)
        {
            cout << v[i] << " ";
        }
    }
    cout << "\n";
    
}
