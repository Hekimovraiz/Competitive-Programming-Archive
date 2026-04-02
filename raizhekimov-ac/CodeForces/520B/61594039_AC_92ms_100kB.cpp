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

signed main()
{
    Lek_Raiz
    int n , m ; cin >> n >> m;

    if(n >= m)
    {
        cout << n - m << "\n";
    }
    else
    {
        int clicks = 0;
        while(m > n)
        {
            if(m % 2 == 0)
                m /= 2;
            else
                m += 1;
            clicks++;
        }
        clicks += (n - m);
        cout << clicks << "\n";
    }
}