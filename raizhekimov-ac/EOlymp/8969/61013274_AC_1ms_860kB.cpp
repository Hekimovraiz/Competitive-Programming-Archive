#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int b[n];

    for(int i = 0 ; i < n ; ++i)
    {
        if(i == 0){
            b[0] = a[0];
        }
        else{

        b[i] = a[i] - a[i - 1];
        }
    }

    for (int i = 0 ; i < n ; ++i)
    {
        cout << b[i] << " ";
    }
}
