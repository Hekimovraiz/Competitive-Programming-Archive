#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;
 
bool f(int x)
{
    if(x < 0)
    {
        return true;
    }
    int r = sqrtl(x);
    return r * r != x;
}
 
signed main()
{
    Lek_Raiz
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }
 
    int max_num = LLONG_MIN;
    for(int i = 0 ; i < n ; ++i)
    {
        if(f(v[i]))
        {
            if(max_num < v[i])
            {
                max_num = v[i];
            }
        }
    }
 
    cout << max_num << "
";
}