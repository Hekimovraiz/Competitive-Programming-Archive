#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i+j == n+1 || i==j || ((j-1 < i && i < n-j+1)) || ((i-1 < j && i > n-j+1)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<'\n';
    }
}
