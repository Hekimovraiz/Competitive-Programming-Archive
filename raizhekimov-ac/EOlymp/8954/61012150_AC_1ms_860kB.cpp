#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int a[t];

    for(int i = 0 ; i < t ; ++i){
        cin >> a[i];
    }
    for(int i = t - 1 ; i >= 0 ; --i){
        cout << a[i] << " ";
    }
}