#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define min(x) *min_element(x.begin() , x.end())

using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n, l; cin >> n >> l;
    vector<int> v(n), ans(n);
    set<int> st;

    for (int &x : v)
    {
        cin >> x;
    }

    for (int i = n - 1; i >= 0; --i)
    {
        st.insert(v[i]);
        ans[i] = st.size();
    }

    while (l--)
    {
        int x;
        cin >> x;
        cout << ans[x - 1] << "\n";
    }
}


signed main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;

    while(t--)
    {
        solve();
    }
}

