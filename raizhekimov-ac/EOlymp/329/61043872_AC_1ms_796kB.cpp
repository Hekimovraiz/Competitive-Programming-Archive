#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string line;
    getline(cin, line); 
    int count = 0;
    bool in_word = false;

    for (char c : line) {
        if (isalnum(c)) { 
            if (!in_word) {
                count++;
                in_word = true;
            }
        } else {
            in_word = false;
        }
    }

    cout << count << "\n";
}