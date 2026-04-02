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
#define pf push_front
#define ep emplace_back
#define pii pair<int, int>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

map<int, int> mp;
int homo = 0, total = 0, qr;

void solve()
{
    cin >> qr;
    while (qr--)
    {
        string s;
        int x;
        cin >> s >> x;

        if (s == "insert")
        {
            if (mp[x] == 1)
            {
                homo++;
            }
            if (mp[x] == 0)
            {
                total++;
            }
            mp[x]++;
        }
        else
        {
            if (mp[x] > 0)
            {
                if (mp[x] >= 2)
                {
                    homo--;
                }
                mp[x]--;
                if (mp[x] == 0)
                {
                    total--;
                }
            }
        }

        if (homo > 0 && total >= 2)
        {
            cout << "both\n";
        }
        else if (homo > 0)
        {
            cout << "homo\n";
        }
        else if (total >= 2)
        {
            cout << "hetero\n";
        }
        else
        {
            cout << "neither\n";
        }
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