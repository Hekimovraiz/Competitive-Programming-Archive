#include "bits/stdc++.h"
#include "atcoder/all"
#include "iomanip"
#include "algorithm"
#include "vector"
#include "math.h"
#include "bitset"
#include "random"
#include "set"
using namespace std;
using namespace atcoder;
#define rep(i, a, b) for(int i = a; i < (int)(b); i++)
#define rrep(i, a, b) for(int i = a; i >= (int)(b); i--)
#define vec vector
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define pub push_back
#define pob pop_back
#define prec setprecision
#define ll long long
#define ull unsigned long long
#define maxE *max_element
#define minE *min_element
#define p_queue priority_queue
using Graph = vec<vec<int>>;
using Pi = pair<ll,ll>;
const ll INF = (1LL << 62);
template<typename T>
using rp_queue = priority_queue<T,vector<T>,greater<T>>;
using mint = modint998244353;
using i128 = __int128_t;
i128 to_i128(ll x) {return (i128)x;}
ostream& operator<< (ostream& os, __int128_t value){
	if (value == 0) return os << "0";
	bool neg = false;
	if (value < 0) {
		neg = true;
		value = -value;
	}
	string s;
	while(value > 0){
		s += char('0'+value%10);
		value /= 10;
	}
	if (neg)s += '-';
	reverse(s.begin(),s.end());
	return os << s;
}
istream& operator>> (istream& is, __int128_t& value){
	string s;
	is >> s;
	bool neg = false;
	if (s[0] == '-') {
		neg = true; s.erase(s.begin());
	}
	value = 0;
	for (char c : s) {
		value = value*10+(c-'0');
	}
	if (neg) value = -value;
	return is;
}

int main(){
	int N; cin >> N;
	vec<ll> V(N);
	rep(i,0,N) cin >> V[i];
	sort(all(V));
	
	ll ans = 0;
	rep(i,0,N-1) ans += abs(V[i]-V[i+1]);
	cout << ans << endl;
	
}
