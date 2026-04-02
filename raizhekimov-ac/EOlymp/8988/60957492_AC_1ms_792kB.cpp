#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string n;
    getline(cin, n);

    for (int i = 0; i < (int)n.size(); ) {
        if (n.substr(i, 2) == "ab") {
            cout << "ups";
            i += 2;
        } else {
            cout << n[i];
            ++i;
        }
    }

    return 0;
}
