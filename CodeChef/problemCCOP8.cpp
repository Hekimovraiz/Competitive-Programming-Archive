/*
 * Problem: CCOP8
 * Platform: CodeChef
 * Link: https://www.codechef.com/problems/CCOP8
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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
// priority_queue<int, vector<int>, greater<int>> pq;

void solve()
{
    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    while (true)
    {

        cout << pq.top() << " ";

        if (pq.top() == 1)
        {
            pq.pop();
            break;
        }
        int x = (pq.top()) / 2;
        pq.pop();
        pq.push(x);
    }

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }


    cout << '\n';
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