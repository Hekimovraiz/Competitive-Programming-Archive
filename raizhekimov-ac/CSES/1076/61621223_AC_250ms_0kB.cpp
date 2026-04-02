#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    Lek_Raiz
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    __indexed_multiset<int> st;
    for (int i = 0; i < k; ++i)
    {
        st.insert(v[i]);
    }

    for (int i = k; i < n; ++i)
    {
        if(k % 2 == 0)
        {
            int mid = k / 2 - 1;
            cout << *st.find_by_order(mid) << " ";
        }
        else
        {
            int mid = k / 2;
            cout << *st.find_by_order(mid) << " ";
        }
        st.erase(st.find_by_order(st.order_of_key(v[i - k])));
        st.insert(v[i]);
    }
    if(k % 2 == 0)
    {
        int mid = k / 2 - 1;
        cout << *st.find_by_order(mid) << " ";
    }
    else
    {
        int mid = k / 2;
        cout << *st.find_by_order(mid) << " ";
    }
    cout << "\n";
}