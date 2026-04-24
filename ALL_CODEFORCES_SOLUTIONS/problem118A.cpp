// Problem ID: 118A
// Platform: Codeforces
// Link: https://codeforces.com/contest/118/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    string n , s = "aioyeuAIOYUE";
    cin >> n;
 
    for(int i = 0 ; i < (int) n.size() ; ++i)
    {
        int f = 0;
        for(int j = 0; j < 12 ; ++j)
        {
            if (n[i] == s[j])
            {
                ++f;
                break;
            }
        }
 
        if(f == 0)
        {
            cout << "." << (char) tolower(n[i]);
        }
    }
 
    cout << "
";
 
}