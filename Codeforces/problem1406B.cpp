/*
 * Problem: 1406B
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1406/problem/B
 */
// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#ifndef ONLINE_JUDGE
#include "__Lek_Raiz.h"
#else
#define debug(...)
#define debugArr(...)
#define debugG(...)
#endif
 
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
 
#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define str string
#define pb push_back
#define pf push_front
#define ep emplace_back
#define pii pair<int, int>
#define FOR0(i, n) for (int i = 0; i < n; ++i)
#define FOR1(i, n) for (int i = 1; i <= n; ++i)
#define size(x) (int)x.size()
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
 
const int sz = 100 + 31;
const int LOG = 63;
const int MOD = 1000003;
const int INF = 1e18;
 
/// variables
int n;
vector<int> v;
 
void solve() /// OWERKILL PRO MAXXXXXXXXXXXXXXXX
{
    cin >> n;
    v.resize(n);
    vector<int> men, mus;
    for (auto &x : v)
    {
        cin >> x;
        if (x < 0)
        {
            men.pb(x);
        }
        else
        {
            mus.pb(x);
        }
    }
    sort(all(v));
    /// check(v);
    if (n == 5)
    {
        int ans = 1;
        for (int i = n - 1; i >= n - 5; --i)
        {
            ans *= v[i];
        }
        cout << ans << "
";
        return;
    }
 
    if (size(men) == 0)
    {
        int ans = 1;
        for (int i = n - 1; i >= n - 5; --i)
        {
            ans *= v[i];
        }
        cout << ans << "
";
        return;
    }
    if (size(mus) == 0)
    {
        int ans = 1;
        for (int i = n - 1; i >= n - 5; --i)
        {
            ans *= v[i];
        }
        cout << ans << "
";
        return;
    }
 
    if (size(men) == 1)
    {
        int ans = 1;
        for (int i = n - 1; i >= n - 5; --i)
        {
            ans *= v[i];
        }
        cout << ans << "
";
        return;
    }
 
    int ans1 = 1;
    for (int i = n - 1; i >= n - 5; --i)
    {
        ans1 *= v[i];
    }
 
    sort(all(men));
    sort(rall(mus));
 
    for (int i = 0; i <= min(4LL, size(men)); i += 2)
    {
        if (i <= 5 && (5 - i) <= size(mus))
        {
            int ans2 = 1;
            for (int j = 0; j < i; ++j)
            {
                ans2 *= men[j];
            }
            for (int j = 0; j < 5 - i; ++j)
            {
                ans2 *= mus[j];
            }
 
            ans1 = max(ans1, ans2);
        }
    }
 
    cout << ans1 << "
";
    v.clear();
}
 
signed main()
{
    Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    // sieve();
 
    int t = 1;
    cin >> t;
 
    while (t-- > 0)
    {
        solve();
    }
}
/*
 
                                ...:==+*****++==-::.........::--=-:.
                            ....:-*%@@@@@@%%%%%@@@@@@@@@@@@@@@@@@%+:.
                        ..:+@@@@@@%=-:.     ..  ..:::-+%@@@@#:...
                        ..:*@@@@@@%-...              .....-*%@@@@*:.
                        .-%@@@@@#:....                    ....-*@@@%+:.
                        .:#@@@@@%=..   ....  ..                 ..:+%@@*:.
                    ..-+#@@@%+@@%=:::=+*#*##@@%#***++==--:..       :+@@%-..
                ...-*@@@%#*=:.:*%@@@@@@@@@@%#%%#@@@%=..              -#@@+..
                ..*@@%+....::.. .-*=.=%%@@%+.-=:#@@+.             .....*@@+..
                ..#@@#..   ..==..     .=%*=+-=*:-%@*:              .-#@#-#@@=.
                .+@@%..      ....  ..:....:::..=%*...              ...-%@@@@@-.
            .:@@@*.::. .....    ...-=*##%%%@@%+:..                ...+@@@@+.
            .:@@@%%@@@##%@@@%#*=...::---=*@@@@@@%=.                  .:#@@+..
            .:@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%=.                   :#@%-.
                .=@@@@%==**#@@@@@@@@@@@@@@@@@@@@@@@@@@#:..                 .#@%:.
                ..+@@@%-. ..:%@@@@@@@@%@@@@@@@@@@@@%%%@@%+..                =%@+.
                .:%@@%.   .:%@@@@@@#:.=@@@@@@@@@@+.                       .#@#:
                    ..:*#..  ..-%@@@@@*...=%*..-#@@+.                       .#@%:..
                    .. ....    ..=@@@@@+. .=*.  .+@+.  ...                  .#@%:..
                                ..-#@@@*   .:.   .==. ..-:.        ..      ..#@#:.
                                .:#@%=.     ..   ..  .*+.        .-:..    =%@=.
                                :*@*...   .::.      -%+...    ..*#:..  ..#@@-.
                                .-@@*-+    .=*:     .+@%-..   ..*@%-.  ..*@@=..
                                .=@@%@*    :#*.    .:*@@+.    .*@@@=.   *@@+.
                                :#@%%@*  .=@@+    .:*@@@+.. .=%@@@@=..:#@@*...
                                .-@@@@@+..-@@#:.   -%@@@@+...+@@#%@@=:*@@%-..
                                .-%@@@%=.:#@@*.. .-%@%#@@+-*%@@+:#@@@@@#=.
                                .+@@@@+.=@@@@+. .+@@=+@@@@@%+::*@@@@#-..
                                .-%@@@*.=@@@@#:.:*@*:-%@@@=..-%@%#=....
                                .:**@@+=@@@@@*.:*@+..*@%-.........
                                    ..:*@@%@@*+@@*:*@+..+@+. .......
                                    .:*@@@@+.+@@##@+..:-..
                                    ...+@@@*..-%@@@+.  ..
                                        .:*@%- .:+@@*.
                                        ...==. ...==..
 
        .....               ....................   .......            ........ .....
        .+@@*               .-@@@@@@@@@@@@@@@@@+    =%@%-.        ..:*%@@@=... =%@%:.
        .+@@*               .-@@@%%%%%%%%%%%%%%+    =%@%-.       .+%@@@*-..    =%@%:
        .+@@*               .-@@#:...............   =%@%-.   ..=#%@@#=:...     =%@%:
        .+@@*               .-@@#:.                 =%@%-. .-*%@@%*-....       =%@%:
        .+@@*               .-@@%#*************=    =%@@#**%@@@#=...           =%@%:
        .+@@*               .-@@@@@@@@@@@@@@@@@*    =%@@@@@@@@%+:.             =%@%:
        .+@@*               .-@@#:..............    =%@%-  .+%@@@%-..          =%@%:
        .+@@*               .-@@#:.                 =%@%-. ...:*@@@%*:..       =%@%:
        .+@@#::::::::::::::..=@@#-::::::::::::::    =%@%-...   ..-#@@@#=.      =%@%:
        .+@@@@@@@@@@@@@@@@%-.=@@@@@@@@@@@@@@@@@*    =%@%-...      .:=%@@%*-.   =%@%:
        .-****************+:.:*****************-.   :+*+:.           .-+***=.. -+*+.
 
*/