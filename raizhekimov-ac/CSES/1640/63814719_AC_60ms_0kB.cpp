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
    int n , m ; cin >> n >> m;
    pair<int , int> a[n + 1];
    for(int i = 1 ; i < n + 1 ; ++i)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a + 1 , a + 1 + n);

    int l = 1 , r = n;

    while(l < r)
    {
        if(a[l].first + a[r].first > m)
        {
            r--;
        }
        else if(a[l].first + a[r].first < m)
        {
            l++;
        }
        else if(a[l].first + a[r].first == m)
        {
            cout << a[r].second << " " << a[l].second << "\n";
            return;
        }
    }

    cout << "IMPOSSIBLE\n";

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

