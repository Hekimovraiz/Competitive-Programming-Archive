/*
 * Problem: TRICHECK
 * Platform: CodeChef
 * Link: https://www.codechef.com/problems/TRICHECK
 */

#include <bits/stdc++.h>
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;

signed main()
{
    Lek_Raiz
    int a , b , c;
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
