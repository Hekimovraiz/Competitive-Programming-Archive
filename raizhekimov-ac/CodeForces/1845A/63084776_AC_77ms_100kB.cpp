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

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << "\n";
    }
    else
    {
        if (k == 1)
        {
            cout << "NO\n";
        }
        else if (k >= 2 && x != 2)
        {
            if (n % 2 == 0)
            {
                cout << "YES\n";
                cout << n / 2 << "\n";
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << "\n";
            }
            else
            {
                if (k >= 3)
                {
                    cout << "YES\n";
                    cout << (n - 3) / 2 + 1 << "\n";
                    cout << 3 << " ";
                    for (int i = 0; i < (n - 3) / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << "\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
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
