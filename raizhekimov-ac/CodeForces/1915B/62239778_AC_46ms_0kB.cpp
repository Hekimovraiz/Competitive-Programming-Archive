#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define min(x) *min_element(x.begin() , x.end())

using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    vector<string> v(3); int n = 3;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
        if(count(v[i].begin() , v[i].end() , '?'))
        {
            if(count(v[i].begin() , v[i].end() , 'A') == 0)
            {
                cout << "A" << '\n';
            }
            else if(count(v[i].begin() , v[i].end() , 'B') == 0)
            {
                cout << "B\n";
            }
            else if(count(v[i].begin() , v[i].end() , 'C') == 0)
            {
                cout << "C\n";
            }
        }
    }
}


signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }
}

