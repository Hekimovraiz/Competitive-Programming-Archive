#include <bits/stdc++.h>
#define int long long
using namespace std;

const int sz = 3e5 + 9;
int a[sz];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    int j = 0;
    while(cin >> n)
    {
        a[j++] = n;
    }

    sort(a, a + j); 

    if (j % 2 == 1)
    {
        cout << a[j / 2] << "\n"; 
    }
    else
    {
        cout << -1 << "\n"; 
    }
}
