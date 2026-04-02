#include <bits/stdc++.h>
#define int long long
#define b_s v.begin() , v.end()
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
    }
    int max1 = 0;
    int f = 0;
    for(auto i : v)
    {
        if(i == 1)
        {
            f += 1;
            if(f > max1)
            {
                max1 = f;
            }
        }
        else
        {
            if(f != 0)
            {
            f -= 1;
            }
        }

    }
    cout << max1 << "\n";


}
