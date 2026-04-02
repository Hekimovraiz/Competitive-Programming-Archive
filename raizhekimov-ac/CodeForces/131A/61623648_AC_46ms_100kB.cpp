#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;


void slove()
{
    string s;
    cin >> s;

    bool all_upper = true;
    bool first_upper = true;

    for (int i = 0; i < s.size(); ++i)
    {
        if (!isupper(s[i]))
        {
            all_upper = false;
        }
        if (i > 0 && !isupper(s[i]))
        {
            first_upper = false;
        }
    }

    if (all_upper || first_upper)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (islower(s[i]))
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s << "\n";
}



int main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;
    while(t--)
    {
        slove();
    }
}
