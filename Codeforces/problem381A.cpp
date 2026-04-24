#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define int long long
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace __gnu_pbds;
 
 
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
 
signed main()
{
    Lek_Raiz
    int n ; cin >> n;
    deque<int> dq(n);
    for(auto &i : dq)
    {
        cin >> i;
    }
 
    int s = 0 , d = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        int val = max(dq.front() , dq.back());
        if(dq.front() > dq.back())
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        
        if(i % 2 == 0)
        {
            s += val;
        }
        else
        {
            d += val;
        }
    }
 
    cout << s << " " << d << "
";
}