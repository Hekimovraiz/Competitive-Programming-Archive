/*
 * Problem: 443A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/443/problem/A
 */
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
 
int main()
{
    Lek_Raiz
    string s;
    getline(cin, s);
 
    set<char> letters;
    for (char c : s)
    {
        if (isalpha(c))
        {
            letters.insert(c);
        }
    }
 
    cout << letters.size() << "
";
}
 