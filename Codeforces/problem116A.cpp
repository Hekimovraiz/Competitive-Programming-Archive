/*
 * Problem: 116A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/116/problem/A
 */
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);  cout.tie(nullptr);
    
    int t;
    cin >> t;
    int max = 0;
    int a , b;
    int sum = 0;
 
 
    for(int i = 1 ; i <= t ; ++i)
    {
        cin >> a >> b;
        sum = sum - a + b;
        if(sum > max)
        {
            max = sum;
        }
    }
 
    cout << max << "
";
}
 
 