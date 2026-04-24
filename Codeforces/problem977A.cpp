#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int sz = 1e3 + 9;
 
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);cout.tie(nullptr);
 
    int s;
    int t;
    cin >> s >> t;
 
    for(int i = 1 ; i <= t ; ++i)
    {
        if(to_string(s)[(int)to_string(s).size() - 1] == '0')
        {
            s /= 10;
        }
        else
        {
            s -= 1;
        }
    }
 
    cout << s << "
";
 
   
}
 
 
 