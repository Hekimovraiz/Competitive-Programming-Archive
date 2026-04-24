// Problem ID: 546A
// Platform: Codeforces
// Link: https://codeforces.com/contest/546/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int k , n , w , sum = 0;
    cin >> k >> n >> w;
 
    for (int i = 1; i <= w; ++i)
    {
        sum += k * i;
    }
 
    cout << max(0LL, sum - n) << "
"; 
}