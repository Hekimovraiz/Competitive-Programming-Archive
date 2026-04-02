#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    string s;
    getline(cin , s);
    set<char> st;
    for(int i = 0 ; i < (int)s.size() - 1 ; ++i)
    {
        if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z')
        {
            st.insert(s[i]);  
        }
    }
    cout << (int)st.size() << "\n";
}
