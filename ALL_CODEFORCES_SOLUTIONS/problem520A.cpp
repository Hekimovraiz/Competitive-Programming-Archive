// Problem ID: 520A
// Platform: Codeforces
// Link: https://codeforces.com/contest/520/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
    int n;
    string s, k = "", l = "";
 
    cin >> n >> ws;           
    getline(cin, s);          
 
    for (int i = 0; i < (int)s.size(); ++i)
    {
        k += tolower(s[i]);   
    }
 
    for (int i = 0; i < (int)k.size(); ++i)
    {
        int a = 0;
        for (int j = 0; j < (int)l.size(); ++j)
        {
            if (k[i] == l[j])
            {
                ++a;
            }
        }
        if (a == 0 && k[i] >= 'a' && k[i] <= 'z')  
        {
            l += k[i];
        }
    }
 
    if ((int)l.size() == 26)
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
";
    }
}