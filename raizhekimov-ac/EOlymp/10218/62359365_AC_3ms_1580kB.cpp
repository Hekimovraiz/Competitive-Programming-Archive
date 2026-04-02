#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define min(x) *min_element(x.begin() , x.end())
#define all(v) v.begin() , v.end()


using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 1e5 + 1;
vector<int> divs(N, 0);

void solve() 
{
    int a, b; cin >> a >> b;

    for (int i = 1; i < N; ++i) 
    {
        for (int j = i; j < N; j += i) 
        {
            divs[j]++;
        }
    }

    map<int, int> mp;
    for (int i = a; i <= b; ++i)
    {
        mp[divs[i]]++;
    }

    int mx_cnt = 0, kk = 0;
    
    for (auto &[div_cnt, cnt] : mp) 
    {
        if (cnt > mx_cnt || (cnt == mx_cnt && div_cnt > kk)) 
        {
            mx_cnt = cnt;
            kk = div_cnt;
        }
    }

    cout << kk << " " << mx_cnt << "\n";
}

signed main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;

    while(t--)
    {
        solve();
    }
}

