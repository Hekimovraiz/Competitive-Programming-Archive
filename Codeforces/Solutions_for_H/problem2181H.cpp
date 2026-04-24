// Problem ID: 2181H
// Platform: Codeforces
// Link: https://codeforces.com/contest/2181/problem/H

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
    int w,h,d,n;
    cin>>w>>h>>d>>n;
    int mx=1e18;
    int ansx=-1,ansy=-1,ansz=-1;
    for(int x=1;x*x<=w;x++)
    {
        if(w%x!=0)
        {
            continue;
        }
        int xx[]={x,w/x};
        for(int xi=0;xi<2;xi++)
        {
            int xx1=xx[xi];
            if(n%xx1!=0)
            {
                continue;
            }
            int r1=n/xx1;
            for(int y=1;y*y<=h;y++)
            {
                if(h%y!=0)
                {
                    continue;
                }
                int yy[]={y,h/y};
                for(int yi=0;yi<2;yi++)
                {
                    int yy1=yy[yi];
                    if(r1%yy1!=0)
                    {
                        continue;
                    }
                    int z=r1/yy1;
                    if(z>=1 && d%z==0)
                    {
                        int cuts=(xx1-1)+(yy1-1)+(z-1);
                        if(cuts<mx)
                        {
                            mx=cuts;
                            ansx=xx1;
                            ansy=yy1;
                            ansz=z;
                        }
                    }
                }
            }
        }
    }
    if(ansx==-1)
    {
        cout<<-1<<'
';
    }
    else
    {
        cout<<ansx-1<<' '<<ansy-1<<' '<<ansz-1<<'
';
    }
}
 
signed main()
{
    fastio
    int t=1;
    //cin>>t;
    while(t--)
    {
        _();
    }
}