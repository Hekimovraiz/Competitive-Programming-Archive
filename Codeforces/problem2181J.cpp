/*
 * Problem: 2181J
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2181/problem/J
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
//buda kecse fener sampiyon
void _()
{
    int n,k;
    cin>>n>>k;
    vector<int> p(n);
    input(p);
    vector<int> c(101,0);
    for(int i=0;i<n;++i)
    {
        c[p[i]]++;
    }
    vector<vector<double>> pp(101,vector<double>(k+2,0.0));
    vector<vector<double>> qp(101,vector<double>(k+2,0.0));
    for(int v=0;v<=100;++v)
    {
        double pv=v/100.0;
        double qv=1.0-pv;
        pp[v][0]=1.0;
        qp[v][0]=1.0;
        for(int e=1;e<=k+1;++e)
        {
            pp[v][e]=pp[v][e-1]*pv;
            qp[v][e]=qp[v][e-1]*qv;
        }
    }
    vector<vector<double>> d(k+1,vector<double>(k+1,0.0));
    vector<vector<double>> u(k+1,vector<double>(k+1,0.0));
    for(int t=0;t<=k;++t)
    {
        for(int w=0;w<=t;++w)
        {
            double sd=0.0;
            double su=0.0;
            for(int v=0;v<=100;++v)
            {
                if(c[v]==0) continue;
                double te=pp[v][w]*qp[v][t-w];
                sd += c[v]*te;
                su += c[v]*te*(v/100.0);
            }
            d[t][w]=sd;
            u[t][w]=su;
        }
    }
    vector<vector<double>> g(k+1,vector<double>(k+1,0.0));
    for(int w=0;w<=k;++w)
    {
        g[k][w]=1.0;
    }
    for(int t=k-1;t>=0;--t)
    {
        for(int w=0;w<=t;++w)
        {
            double a=g[t+1][w+1];
            double b=g[t+1][w];
            double al=0.0;
            if(d[t][w]>0.0)
            {
                al=u[t][w]/d[t][w];
            }
            double v0 = a*al + b*(1.0-al);
            double v1 = 2.0*a*al;
            if(v1>v0)
            {
                g[t][w]=v1;
            }
            else
            {
                g[t][w]=v0;
            }
        }
    }
    double an = g[0][0]*1000.0 - 1000.0;
    cout<<fixed<<setprecision(15)<<an<<'
';
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