/*
 * Problem: PAIRS1
 * Platform: SPOJ
 * Link: https://www.spoj.com/problems/PAIRS1/
 */

#include <bits/stdc++.h>
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

signed main()
{
    Lek_Raiz

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    unordered_set<int> s;

    for (auto &i : v)
    {
        cin >> i;
        s.insert(i); 
    }

    int cnt = 0;
    for (auto i : v)
    {
        if (s.count(i + k)) 
        {
            ++cnt;
        }
    }

    cout << cnt << "\n";
}
