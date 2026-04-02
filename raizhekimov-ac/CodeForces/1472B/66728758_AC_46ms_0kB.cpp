#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define all v.begin() , v.end()

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    int k1 = 0, k2 = 0;

    for (int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        if (x == 1) k1++;
        else k2++;
    }

    int t = k1 + 2 * k2;

    if (t % 2 != 0)
    {
        cout << "NO\n";
        return;
    }

    if (k1 == 0 && (t / 2) % 2 != 0)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}


signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
