#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int test;
    cin >> test;
    int X = 0;

    for(int i = 0 ; i < test ; ++i)
    {
        string n;
        cin >> n;

        for(int j = 0 ; j < 3 ; ++j)
        {
            if(n[j] == '+')
            {
                ++X;
                break;
            }
            else if(n[j] == '-')
            {
                --X;
                break;
            }
        }
    }
    cout << X << "\n";
}
