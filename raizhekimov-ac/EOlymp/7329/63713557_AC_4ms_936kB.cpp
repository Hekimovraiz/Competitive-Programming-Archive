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

bool check(vector<int> v, int qw, int m, int n)
{
    if(qw == 0)
    {
        return false;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cnt += v[i] / qw;
    }
    return m <= cnt;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i];
    }

    int l = 0, r = *max_element(all(v)), best = 0, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(v, mid, m, n))
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
