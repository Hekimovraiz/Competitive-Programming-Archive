#include <bits/stdc++.h>
#define int long long
#define all(v) (v.begin() , v.end())
using namespace std;

const int sz = 2e5 + 9;
string a[sz];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    deque<int> dq;
    while(t--)
    {
        int n;
        cin >> n;

        if(n == 1)
        {
            int m;
            cin >> m;
            dq.push_front(m);
        }
        else if(n == 2)
        {
            int m;
            cin >> m;
            dq.push_back(m);
        }
        else if(n == 3)
        {
            cout << dq.front() << "\n";
            dq.pop_front(); 
        }
        else if(n == 4)
        {
            cout << dq.back() << "\n";
            dq.pop_back();
        }

    }
    
}