///welcome to MuratRaqli's zibillik
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
//#define int long long
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
    long long n;
    cin>>n;
    vector<vector<long long>> s(n);
    vector<long long> g(n);
    vector<pair<long long,int>> c;
    c.reserve(300000+n);
    for(int i=0;i<n;++i)
    {
        int k;
        long long x1,x2;
        cin>>k>>x1>>x2;
        vector<long long> l(k);
        long long sum=0;
        for(int j=0;j<k;++j)
        {
            cin>>l[j];
            sum+=l[j];
        }
        long long w=x2-x1;
        g[i]=w-sum;
        s[i].resize(k+1);
        long long p=0;
        s[i][0]=x1;
        c.emplace_back(s[i][0],i);
        for(int j=1;j<=k;++j)
        {
            p+=l[j-1];
            s[i][j]=x1+p;
            c.emplace_back(s[i][j],i);
        }
    }
    sort(c.begin(),c.end(),[](const pair<long long,int>& a,const pair<long long,int>& b){
        if(a.first!=b.first) return a.first<b.first;
        return a.second<b.second;
    });
    int total=c.size();
    vector<pair<long long,vector<pair<int,int>>>> gr;
    gr.reserve(total);
    for(size_t idx=0;idx<c.size();)
    {
        long long val=c[idx].first;
        vector<pair<int,int>> lst;
        size_t j=idx;
        while(j<c.size() && c[j].first==val)
        {
            int layer=c[j].second;
            auto &v=s[layer];
            int p=int(lower_bound(v.begin(),v.end(),val)-v.begin());
            lst.emplace_back(layer,p);
            j++;
        }
        gr.emplace_back(val,move(lst));
        idx=j;
    }
 
    int m=gr.size();
    vector<int> idxL(n,-1);
    vector<long long> curV(n,LLONG_MAX);
    int ready=0;
    multiset<long long> S;
    long long ans=0;
 
    for(int gi=0;gi<m;++gi)
    {
        long long M=gr[gi].first;
        for(auto &pr:gr[gi].second)
        {
            int layer=pr.first;
            int p=pr.second;
            if(p<=idxL[layer]) continue;
            if(idxL[layer]!=-1)
            {
                auto it=S.find(curV[layer]);
                if(it!=S.end()) S.erase(it);
            }
            else ready++;
            idxL[layer]=p;
            curV[layer]=s[layer][p]+g[layer];
            S.insert(curV[layer]);
        }
        if(ready==n)
        {
            long long mn=*S.begin();
            long long len=mn-M;
            if(len>0) ans=max(ans,len);
        }
    }
    cout<<ans<<'
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