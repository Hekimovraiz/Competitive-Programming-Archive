#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;

signed main()
{
    Lek_Raiz
    int n;
    cin >> n;
    int u;
    cin >> u;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }

    sort(v.begin() , v.end());

    int sum = 0 , cnt = 0;

    for(int i = n - 1 ; i >= 0 ; --i)
    {
        sum += v[i];
        ++cnt;
        if(sum >= u)
        {
            break;
        }
    }

    cout << cnt << "\n";

}

