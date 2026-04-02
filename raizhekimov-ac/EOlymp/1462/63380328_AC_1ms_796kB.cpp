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

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 2e4 + 3;

bool cmp(const int &l, const int &r)
{
    if((to_string(l)[(int)to_string(l).size() - 1] != 0 ? l % 10 : 0) == (to_string(r)[(int)to_string(r).size() - 1] != 0 ? r % 10 : 0))
    {
        return r > l;
    }
    return (to_string(l)[(int)to_string(l).size() - 1] != 0 ? l % 10 : 0) < (to_string(r)[(int)to_string(r).size() - 1] != 0 ? r % 10 : 0);
}


void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(all(v), cmp);
    for (auto i : v)
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
