#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int T;
    cin >> T;
    for(int x = 0 ; x < T ; ++x)
    {
        int N;
        cin >> N;
        vector<int> v(N);
        for(int i = 0 ; i < N ; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin() , v.end());
        if(v[N - 1] != v[N - 2])
        {
        cout << v[N - 1] + v[N - 2] << "\n";
        }
        else
        {
            int nn = 0;
            for(int k = N - 2 ; k > 0 ; --k)
            {
                if (v[k] != v[N - 1])
                {
                    nn = v[k];
                    break;
                }
            }
            cout << nn + v[N -1] << "\n";
        }
    }
}