#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    int n ; cin >> n;
    if(n >= 1900)
    {
        cout << "Division 1\n";
    }
    else if(1600 <= n && n <= 1899)
    {
        cout << "Division 2\n";
    }
    else if(1400 <= n && n <= 1599)
    {
        cout << "Division 3\n";
    }
    else
    {
        cout << "Division 4\n";
    }
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

