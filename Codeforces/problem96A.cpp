#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
 
    string n;
    cin >> n;
 
    for(int i = 0; i <= (int)n.size() - 7; ++i)
    {
        string k = n.substr(i, 7); 
        if (k == "0000000" || k == "1111111") {
            cout << "YES
";
            return 0;
        }
    }
 
    cout << "NO
";
}
 
 
 
 
 