// Problem ID: 2181M
// Platform: Codeforces
// Link: https://codeforces.com/contest/2181/problem/M

///welcome to MuratRaqli's zibillik
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES"<<'
';
#define NO cout<<"NO"<<'
';
#define Yes cout<<"Yes"<<'
';
#define No cout<<"No"<<'
';
#define pb push_back
#define pf push_front
#define M_PI 3.14159265358979323846
const int MOD=1e9+7;
const int INF=1000000007;
const int LINF=4e18;
const int LOG=21;
const int MAXN=20;
const int MAXM=100005;
template<typename T>
void print(const vector<T>& v)
{
    for(auto &x:v)
    {
        cout<<x<<' ';
    }
    cout<<'
';
}
template<typename T>
void input(vector<T>& v)
{
    for(auto &x:v)
    {
        cin>>x;
    }
}
int ebob(int a,int b)
{
    int g=std::__gcd(a,b);
    return g;
}
int ekob(int a,int b)
{
    int g=std::__gcd(a,b);
    return (a/g)*b;
}
 
using namespace __gnu_pbds;
template<typename T>
using indexed_set = tree<
                    T,
                    null_type,
                    less<T>,
                    rb_tree_tag,
                    tree_order_statistics_node_update
                    >;
template<typename T>
using indexed_multiset=tree<
                       pair<T,int>,
                       null_type,
                       less<pair<T,int>>,
                       rb_tree_tag,
                       tree_order_statistics_node_update
                       >;
///--------------------TEMPLATE END-------------------------------------
 
void _()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x>>y;
        int n=x.size();
        int dp0=0,dp1=LINF;
        for(int i=0; i<n; ++i)
        {
            int xi=x[i]-'0';
            int yi=y[i]-'0';
            int nd0=LINF,nd1=LINF;
            for(int p=0; p<2; ++p)
            {
                int cur=(p==0?dp0:dp1);
                if(cur>=LINF) continue;
                for(int v=0; v<2; ++v)
                {
                    int np=(p+v)&1;
                    int cost=cur + (xi!=v) + (yi!=np);
                    if(np==0) nd0=min(nd0,cost);
                    else nd1=min(nd1,cost);
                }
            }
            dp0=nd0;
            dp1=nd1;
        }
        cout<<min(dp0,dp1)<<"
";
    }
}
 
 
signed main()
{
    fastio
    _();
}