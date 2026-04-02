/*
 * Problem: 1283B - Candies Division
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1283/B
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

const int sz = 1e6 + 31;
const int LOG = 63;
const int MOD = 1000003;
const int INF = 1e18;

// variables :

void solve()
{
    /*
    Codeforces Round 1078 (Div. 2) Question -  A
    int n , k;
    cin >> n >> k;
    cout << n - n / k << "\n";
    */

    /*
    Codeforces Round 1078 (Div. 2) Question -  B
    int n, x, y, k = 0, ans = 0;
    cin >> n >> x >> y;
    vector<int> v(n);

    for (auto &p : v)
    {
        cin >> p;
        k += (p / x) * y;
    }
    for (auto p : v)
    {
        ans = max(ans, p + (k - (p / x) * y));
    }

    cout << ans << '\n';
    */
    /*  Codeforces  Round 1078 (Div.  2) Question - C */

    int n, k;
    cin >> n >> k;
    int l = 0, r = n / k, ans = 0, h = k / 2, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (k * mid > n)
        {
            r = mid - 1;
            continue;
        }
        ans = max(ans, k * mid + min(n - k * mid, h));
        if (k * mid + h <= n)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << "\n";
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
