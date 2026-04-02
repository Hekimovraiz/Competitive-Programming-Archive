#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0) ; cin.tie(nullptr) ; cout.tie(nullptr);
    string s;
    getline(cin , s);
    int k = 0;
    set<char> st;
    for(int i = 0 ; i < (int)s.size() ; ++i)
    {
        if(s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ')
        {
            st.insert(s[i]);
        }
    }
    cout << st.size() << "\n";
}
