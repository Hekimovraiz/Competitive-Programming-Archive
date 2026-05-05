/*
 * Problem: 2181A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2181/problem/A
 */
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
    int n;
    int m;
    cin>>n>>m;
 
    vector<string>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
 
    vector<array<int,26>>cnt(n);
    array<int,26>sum{};
    sum.fill(0);
 
    for(int i=0; i<n; ++i)
    {
        cnt[i].fill(0);
        for(char c:a[i])
        {
            ++cnt[i][c-'A'];
            ++sum[c-'A'];
        }
    }
 
    for(int l=0; l<n; ++l)
    {
        int ans=LLONG_MAX;
        bool f=true;
 
        for(int c=0; c<26; ++c)
        {
            int o=sum[c]-cnt[l][c];
            if(o==0)
            {
                if(cnt[l][c]>0)
                {
                    f=false;
                    break;
                }
            }
            else
            {
                int av=m*o;
                int need=cnt[l][c];
                if(av<need)
                {
                    f=false;
                    break;
                }
                int mx=(av-need)/o;
                ans=min(ans,mx);
            }
        }
 
        if(!f)
        {
            cout<<-1;
        }
        else
        {
            cout<<ans;
        }
 
        if(l+1<n)
        {
            cout<<' ';
        }
    }
    cout<<'
';
}
 
signed main()
{
    fastio
    int t=1;
    ///cin>>t;
    while(t--)
    {
        _();
    }
}