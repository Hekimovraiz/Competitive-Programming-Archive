#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;
 
signed main()
{
    Lek_Raiz
    int n; cin >> n;
    vector<string> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }
    set<string> st;
    for(int i = n - 1 ; i >= 0 ; --i)
    {
        if(!st.count(v[i]))
        {
            cout << v[i] << "\n";
            st.insert(v[i]);
        }
    }
}