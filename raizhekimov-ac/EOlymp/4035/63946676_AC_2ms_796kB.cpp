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

bool check(vector<int> &v , int &k ,int &mid)
{
    int cnt = 1;
    int lst = v[0];
    for(int i = 1 ; i < (int) v.size(); ++i)
    {
        if(v[i] - lst >= mid)
        {
            ++cnt;
            lst = v[i];
        } 
        if(cnt == k)
        {
            return true;
        }
    }
    return false;

}

void solve()
{
    int n , k; cin >> n >> k;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }

    int l = 0 , r = 1e18 , mid , best = 0;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(check(v , k , mid))
        {
            best = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << best << "\n";
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}
