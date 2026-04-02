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

const int sz = 9999 + 31;
const int LOG = 63;
const int MOD = 32768;
const int INF = 1e18;

/// variables:
int a, b;

int sum_of_dig(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void BFS(int node)
{
    queue<pair<int, int>> q;
    q.push(make_pair(node, 0));
    bitset<sz> seen(false);

    while (true)
    {
        auto f = q.front();
        q.pop();
        if (f.first == b)
        {
            cout << f.second << "\n";
            return;
        }
        int op1 = f.first * 3, op2 = f.first + sum_of_dig(f.first), op3 = f.first - 2;

        if (op1 <= 9999 && !seen[op1])
        {
            seen[op1] = true;
            q.push(make_pair(op1, f.second + 1));
        }

        if (op2 <= 9999 && !seen[op2])
        {
            seen[op2] = true;
            q.push(make_pair(op2, f.second + 1));
        }

        if (op3 <= 9999 && op3 >= 0 && !seen[op3])
        {
            seen[op3] = true;
            q.push(make_pair(op3, f.second + 1));
        }
    }
}

void solve()
{
    cin >> a >> b;
    // op1 -> a *= 3
    // op2 -> a += sum_of_a
    // op3 -> a -= 2

    BFS(a);
}

signed main()
{
    Lek_Raiz;
    // freopen("bcount.in", "r", stdin);
    // freopen("bcount.out", "w", stdout);
    // sieve();

    int t = 1;
    // cin >> t;

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
