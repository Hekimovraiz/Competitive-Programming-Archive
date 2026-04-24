/*
 * Problem: 2195C - Dice Roll Sequence
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2195/problem/C
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
 
const int sz = 32768 + 31;
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;
 
/// variables:
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }
 
    map<int, int> mp;
    mp[1] = 6;
    mp[2] = 5;
    mp[3] = 4;
    mp[4] = 3;
    mp[5] = 2;
    mp[6] = 1;
 
    vector<vector<int>> qonshu(7);
    qonshu[1] = {2, 3, 4, 5};
    qonshu[2] = {1, 3, 4, 6};
    qonshu[3] = {1, 2, 5, 6};
    qonshu[4] = {1, 2, 5, 6};
    qonshu[5] = {1, 3, 4, 6};
    qonshu[6] = {2, 3, 4, 5};
 
    int cnt = 0;
    for (int i = 1; i <= n - 1; ++i)
    {
        if (v[i] == v[i + 1] || mp[v[i]] == v[i + 1])
        {
            ++cnt;
            if (i <= n - 2)
            {
                for (int x : qonshu[v[i]])
                {
                    if (x != v[i + 2] && x != v[i] && x != mp[v[i + 2]] && x != mp[v[i]])
                    {
                        v[i + 1] = x;
                        break;
                    }
                }
            }
        }
    }
 
    cout << cnt << "
";
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