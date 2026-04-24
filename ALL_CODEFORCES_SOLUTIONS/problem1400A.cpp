// Problem ID: 1400A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1400/problem/A

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
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const int sz = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    int n;
    str s;
    cin >> n >> s;
 
    while (true)
    {
        str cvb = "";
        for (int i = 0; i < n; ++i)
        {
            cvb += (rng() % 2 ? '1' : '0');
        }
 
        bool flag = true;
        for (int l = 0; l + n <= (int)s.size(); ++l)
        {
            str sub = s.substr(l, n);
            bool kk = false;
            for (int i = 0; i < n; ++i)
                if (sub[i] == cvb[i])
                {
                    kk = true;
                }
            if (!kk)
            {
                flag = false;
                break;
            }
        }
 
        if (flag)
        {
            cout << cvb << "
";
            return;
        }
    }
}
 
signed main()
{
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}