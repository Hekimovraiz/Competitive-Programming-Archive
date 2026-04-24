#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int sz = 1e3 + 9;
 
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    string n , k , k1 = "";
    cin >> n >> k;
 
    int s = (int)k.size();
 
    while(s--)
    {
        k1 += k[s];
    }
 
    if(n == k1)
    {
        cout << "YES" << "
";
    }
    else
    {
        cout << "NO" << "
";
    }
    
 
    
}