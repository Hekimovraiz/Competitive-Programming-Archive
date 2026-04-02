#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int mx = 1;   
    int cnt = 1;

    for(int i = 1; i < n; ++i)
    {
        if(v[i] > v[i - 1])
        {
            ++cnt;
        }
        else
        {
            cnt = 1;
        }
        mx = max(mx, cnt);
    }

    cout << mx << "\n";
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