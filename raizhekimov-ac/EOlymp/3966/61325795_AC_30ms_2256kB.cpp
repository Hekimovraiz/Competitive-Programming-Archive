    #include <bits/stdc++.h>
    #define int long long
    #define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    using namespace std;

    signed main()
    {
        Lek_Raiz
        
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &i : v)
        {
            cin >> i;
        }
        int m ;
        cin >> m;
        vector<int> k(m);
        for(auto &i : k)
        {
            cin >> i;
        }

        for(auto i : k)
        {   
            if(binary_search(v.begin() , v.end() , i))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }

    }
