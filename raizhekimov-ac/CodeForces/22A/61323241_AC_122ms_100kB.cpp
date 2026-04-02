#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> st;
    while(n--)
    {
        int k;
        cin >> k;
        st.insert(k);
    }
    if((int)st.size() <= 1)
    {
        cout << "NO" << "\n";
        return 0;
    }
    auto it = st.begin();
    advance(it , 1);
    cout << *it << "\n";
}