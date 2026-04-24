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
    string n , k , w; cin >> n >> k >> w;
    vector<char> v , f = {w.begin() , w.end()};
    for (auto i : n)
    {
        v.push_back(i);
    }
    for (auto i : k)
    {
        v.push_back(i);
    }
    sort(v.begin() , v.end());
    sort(f.begin() , f.end());
    if(v == f)
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
";
    }
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
 