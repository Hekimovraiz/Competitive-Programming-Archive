#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

//#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define min(x) *min_element(x.begin() , x.end())
#define all(v) v.begin() , v.end()


using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



void solve()
{
    int n ; cin >> n;
    vector<int> v;
    for(int i = 1 ; i * i <= n ; ++i)
    {
        if(n % i == 0)
        {
            v.push_back(i);
            if(i != n % i)
            {
                v.push_back(n / i);
            }
        }
    }   
    sort(all(v));
    cout << (v[0] != 1 ? v[0] : v[1]) << "\n";
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

