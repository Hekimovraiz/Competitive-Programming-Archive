#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    int a[n];

    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
    }

    int k = 0;

    for (int i = 0 ; i < n - 1 ; ++i)
    {
        for(int j = 0 ; j < n - 1 ; ++j)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j] , a[j + 1]);
                ++k;
            }
        }
    }

    /*for(int i = 0 ; i < n ; ++i)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    */
   cout << k << "\n";
}
