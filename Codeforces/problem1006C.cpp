/*
 * Problem: 1006C - Three Parts of the Array
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1006/problem/C
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
 
const int sz = 5e4 + 31;
const int LOG = 63;
const int MOD = 1000003;
const int INF = 1e18;
 
// variables :
int n, sum = 0, ans = 0;
vector<int> v;
set<pair<int, int>> suff;
 
void solve()
{
    cin >> n;
    v.resize(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }
    for (int i = n; i >= 1; --i)
    {
        sum += v[i];
        suff.insert({sum, i});
    }
    sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += v[i];
        ans = max(ans, ((suff.lower_bound({sum, 0})->first) == sum && (suff.lower_bound({sum, 0})->second) > i) ? sum : -INF);
    }
 
    cout << ans << '
';
}
 
signed main()
{
    Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    // sieve();
 
    int t = 1;
    /// cin >> t;
 
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