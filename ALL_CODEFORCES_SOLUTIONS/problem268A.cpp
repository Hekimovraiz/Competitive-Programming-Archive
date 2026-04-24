// Problem ID: 268A
// Platform: Codeforces
// Link: https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0) ; cin.tie(nullptr) ; cout.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> v(n) , k(n);
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> v[i] >> k[i];
    }
 
    int cnt = 0;
    
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
        {
            if(i != j && v[i] == k[j])
            {
                ++cnt;
            }
        }
    }
 
    cout << cnt << "
";
 
 
}
 