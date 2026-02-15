/*
 * Problem: CVOTE
 * Platform: CodeChef
 * Link: https://www.codechef.com/problems/CVOTE
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
#define pf push_front
#define ep emplace_back
#define pii pair<int, int>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 1e4 + 3;
const int sz1 = 1e5 + 4;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int n, m;

map<str, str> w;
map<str, int> ans;

map<str, int> olke;
map<str, int> ad;

str max_olke = "", max_ad = "";
int mx_olke = LLONG_MIN, mx_ad = LLONG_MIN;

vector<str> olkeler(sz);
vector<str> adlar(sz1);

void solve()
{
    cin >> n >> m;
    while (n--)
    {
        str a, b;
        cin >> a >> b;
        w[a] = b;
        olkeler.pb(b);
        adlar.pb(a);
    }

    while (m--)
    {
        str a;
        cin >> a;
        ans[a]++;
        if (ans[a] > mx_ad)
        {
            mx_ad = ans[a];
            max_ad = a;
        }
        olke[w[a]]++;
        if (olke[w[a]] > mx_olke)
        {
            mx_olke = olke[w[a]];
            max_olke = w[a];
        }
    }

    for (int i = 0; i < (int)olkeler.size(); ++i)
    {
        if (olke[olkeler[i]] == mx_olke && olkeler[i] < max_olke)
        {
            max_olke = olkeler[i];
        }
    }

    for (int i = 0; i < (int)adlar.size(); ++i)
    {
        if (ans[adlar[i]] == mx_ad && adlar[i] < max_ad)
        {
            max_ad = adlar[i];
        }
    }

    cout << max_olke << "\n"
         << max_ad << "\n";
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