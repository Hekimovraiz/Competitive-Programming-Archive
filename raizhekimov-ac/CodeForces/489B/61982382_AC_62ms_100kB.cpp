#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define all v.begin() , v.end()
#define v_i for(int i = 0 ; i < n ; ++i)

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n ; cin >> n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }

    sort(v.begin(), v.end());
    
    int m ; cin >> m;
    map<int , int > mp;
    for(int i = 0 ; i < m ; ++i)
    {
        int x ; cin >> x;
        mp[x]++;
    }

    int cnt = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(mp[v[i] - 1])
        {
            mp[v[i] - 1]--;
            cnt++;
        }
        else if(mp[v[i]])
        {
            mp[v[i]]--;
            cnt++;
        }
        else if(mp[v[i] + 1])
        {
            mp[v[i] + 1]--;
            cnt++;
        }
    }

    cout << cnt << "\n";
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
