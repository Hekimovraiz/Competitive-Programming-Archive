// Problem ID: 785A
// Platform: Codeforces
// Link: https://codeforces.com/contest/785/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
    int t , k = 0; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(s == "Icosahedron") 
        {
            k += 20;
        }
        else if(s == "Cube")
        {
            k += 6;
        }
        else if(s == "Tetrahedron")
        {
            k += 4;
        }
        else if(s == "Dodecahedron")
        {
            k += 12;
        }
        else if(s == "Octahedron")
        {
            k += 8;
        }
    }
 
    cout << k << "
";
}