#include <bits/stdc++.h>
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

signed main()
{
    Lek_Raiz
    
    int n;
    cin >> n;
    set<int> st;
    while(n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << (int)st.size() << "\n";
}
