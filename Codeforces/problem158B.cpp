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
 
 
void slove()
{
    int n ; cin >> n;
    int a1 = 0 , a2 = 0 , a3 = 0 , a4 = 0;
    int cnt = 0;
    while(n--)
    {
        int x ; cin >> x;
        if(x == 1)
        {
            ++a1;
        }
        else if(x == 2)
        {
            a2++;
        }
        else if(x == 3)
        {
            ++a3;
        }
        else
        {
            ++a4;
        }
    }
 
    cnt += a4;
 
    if(a3 > a1)
    {
        cnt += a3;
        a1 = 0;
    }
    else
    {
        cnt += a3;
        a1 -= a3;
    }
 
 
    cnt += a2 / 2;
    a2 %= 2;
 
    if(a2 != 0)
    {
        cnt += 1;
        a1 -= min(2, a1);
    }
 
    if(a1 > 0)
    {
        cnt += (a1 + 3) / 4;
    }
 
    cout << cnt << "
";
}
 
 
int main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;
    while(t--)
    {
        slove();
    }
}