/*
 * Problem: 10762
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/10762
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>


#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define ll long long
#define str string
#define pb push_back
#define ep emplace_back

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n ; cin >> n;
    vector<int> v(n) , ans;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
    }

    int l = 0 , r = 0 , max = 0;
    while(r < n)
    {
        if(max < v[r])
        {
            max =  v[r];
            ans.pb(-1);
            ++r;
        }
        else if(v[r] <= max)
        {
            int f = r;
            while(v[r] >= v[f])
            {
                --f;
            }
            ans.pb(f);
            ++r;
        }
    }

    for(auto &i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

}


signed main()
{

    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

}
