#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int T;
    cin >> T;

    for(int x = 0 ; x < T ; ++x)
    {
        int N , X;
        cin >> N >> X;
        vector<int> A(N);
        vector<int> B(N);
        
        for(int i = 0; i < N; ++i) {
            cin >> A[i]; 
        }
        for(int i = 0; i < N; ++i) {
            cin >> B[i]; 
        }

        int sum = 0;
        for(int i =  0 ; i < N ; ++i)
        {
            if(A[i] >= X)
            {
                sum += B[i];
            }
        }
        cout << sum << "\n";
    }
}

