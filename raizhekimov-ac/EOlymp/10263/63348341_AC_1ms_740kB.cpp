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

bool cmp(const pair<string, pair<string, int>> &l, const pair<string, pair<string, int>> &r)
{
    if (l.second.first == r.second.first)
    {
        if (l.first == r.first)
        {
            return l.second.second > r.second.second;
        }
        return l.first < r.first;
    }
    return l.second.first < r.second.first;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<string, pair<string, int>>> v(n);
    for (auto &i : v)
    {
        cin >> i.first >> i.second.first >> i.second.second;
    }
    sort(all(v), cmp);
    for (auto i : v)
    {
        cout << i.first << " " << i.second.first << " " << i.second.second << "\n";
    }
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
