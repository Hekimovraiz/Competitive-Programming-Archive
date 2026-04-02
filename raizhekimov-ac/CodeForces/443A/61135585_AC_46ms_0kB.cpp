#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    
    string n;
    getline(cin, n);
    
    int s = 0;
    for (int i = 0 ; i < (int) n.size() ; ++i)
    {
        if (n[i] >= 'a' && n[i] <= 'z') 
        {
            ++s;
        }
    }

    string a[s];
    int j = 0;
    for (int i = 0 ; i < (int) n.size() ; ++i)
    {
        if (n[i] >= 'a' && n[i] <= 'z') 
        {
            a[j++] = string(1, n[i]); 
        }
    }

    sort(a, a + j);
    j = unique(a, a + j) - a; 

    cout << j << "\n"; 


}
