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

    int l = 0 , r = n - 1;
    int d = 0 , s = 0;
    bool dd = true , ss = false;

    for(int i = 0 ; i < n  ; ++i)
    {
        if(v[r] >= v[l] && dd == true)
        {
            d += v[r];
            --r;
            ss = true;
            dd = false;
        }
        else if(v[r] < v[l] && dd == true)
        {
            d += v[l];
            ++l;
            ss = true;
            dd = false;
        }
        else if(v[r] >= v[l] && ss == true)
        {
            s += v[r];
            --r;
            ss = false;
            dd = true;
        }
        else if(v[r] < v[l] && ss == true)
        {
            s += v[l];
            ++l;
            ss = false;
            dd = true;
        }
    }
    cout << d << " " << s << "\n";
}
