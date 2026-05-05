/*
 * Problem: 2181G
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2181/problem/G
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
    cin>>n;
    vector<int>a(n);
    input(a);
    vector<int>sg(n);
    vector<int>g(n);
    sg[0]=1;
    g[0]=0;
    for(int i=1; i<n; i++)
    {
        sg[i]=-sg[i-1];
        g[i]=a[i]-g[i-1];
    }
    int s=0;
    for(int i=0; i<n; i++)
    {
        s+=g[i];
    }
    int r=LINF;
    if(n%2==1)
    {
        int x=(a[0]-g[n-1])/2;
        vector<int>y(n);
        int m=0;
        int su=0;
        bool ok=true;
        for(int i=0; i<n; i++)
        {
            y[i]=sg[i]*x+g[i];
            if(y[i]<0)
            {
                ok=false;
            }
            su+=y[i];
            if(y[i]>m)
            {
                m=y[i];
            }
        }
        if(!ok)
        {
            cout<<0<<'
';
            return;
        }
        r=max(m,(su+n-2)/(n-1));
    }
    else
    {
        int l=-LINF;
        int h=LINF;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                l=max(l,-g[i]);
            }
            else
            {
                h=min(h,g[i]);
            }
        }
        vector<int>v;
        v.pb(l);
        v.pb(h);
        int mx=0;
        int mo=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                mx=max(mx,g[i]);
            }
            else
            {
                mo=max(mo,g[i]);
            }
        }
        int x1=(mo-mx)/2;
        int x2=x1+1;
        v.pb(x1);
        v.pb(x2);
        for(int k=0; k<v.size(); k++)
        {
            int x=v[k];
            if(x<l)
            {
                x=l;
            }
            if(x>h)
            {
                x=h;
            }
            vector<int>y(n);
            int m=0;
            int su=0;
            bool ok=true;
            for(int i=0; i<n; i++)
            {
                y[i]=sg[i]*x+g[i];
                if(y[i]<0)
                {
                    ok=false;
                }
                su+=y[i];
                if(y[i]>m)
                {
                    m=y[i];
                }
            }
            if(!ok)
            {
                continue;
            }
            int nd=max(m,(su+n-2)/(n-1));
            if(nd<r)
            {
                r=nd;
            }
        }
    }
    cout<<r<<'
';
}
 
 
signed main()
{
    fastio
    int t=1;
    cin>>t;
    while(t--)
    {
        _();
    }
}