#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define min(x) *min_element(x.begin() , x.end())
#define all(v) v.begin() , v.end()
#define ll long long
#define str string

using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    string s;
    getline(cin , s);
    vector<int> v;

    for(int i = 0 ; i < (int) s.size() ; ++i)
    {
        if(s[i] != ' ')
        {
            str f = "";
            while (i < s.size() && s[i] != ' ')
            {
                f += s[i];
                ++i;
            }
            v.push_back(stoll(f));
        }
    }

    int mx = 0;
    for (int i = 0 ; i < (int)v.size() ; ++i)
    {
        for (int j = 0 ; j < (int)v.size() ; ++j)
        {
            if(i != j)
            {
                mx = max(mx , gcd(v[i] , v[j]));
            }
        }
    }

    cout << mx << "\n";
}



signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        solve();
    }
}

