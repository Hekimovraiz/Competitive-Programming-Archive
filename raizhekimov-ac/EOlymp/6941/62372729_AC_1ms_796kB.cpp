#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define min(x) *min_element(x.begin() , x.end())
#define all(v) v.begin() , v.end()
#define ll long long
#define str string

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
        for(int i = 0 ; i < n ; ++i)
        {
            cin >> v[i];
        }

        int sum = 0;

        for(int i = 0 ; i < n ; ++i)
        {
            for(int j = i + 1 ; j < n ; ++j)
            {
                sum += __gcd(v[i] , v[j]);
            }
        }
        cout << sum << "\n";
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

