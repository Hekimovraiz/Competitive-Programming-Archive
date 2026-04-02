#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int n)
{
    if(n == 0)
        return 0;
    return f(n - 1) + n;

}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr) ; cout.tie(nullptr);
    int n;
    cin >> n;
    cout << f(n) << "\n";
    
}
