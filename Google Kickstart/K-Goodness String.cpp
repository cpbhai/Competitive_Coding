//Link: https://codingcompetitions.withgoogle.com/kickstart/round/0000000000436140/000000000068cca3
#include<bits/stdc++.h>
using namespace std;
#define double long double
#define int long long
#define pb push_back
#define mkp make_pair
#define all(v) v.begin(),v.end()
typedef map<int,int> mii;
typedef unordered_map<int,int> umii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define fr first
#define sc second
#define seb(x) __builtin_popcountll(x)
#define zeb(x) __builtin_ctzll(x)
#define inf 1e18
#define pqm(type) priority_queue<type>
#define pqM(type) priority_queue<type,vector<type>,greater<type> >
#define sz(x) (size_t)x.size()
#define cpbhai ios_base::sync_with_stdio(false); cin.tie(0);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cout << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
const int fm=998244353;
const int mod=(1e9)+7;
const double eps=1e-9;
void solve(){
	int n, c=0, k;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=1; i<=(n/2); ++i) if(s[i-1]!=s[n-i]) ++c;
	cout<<abs(k-c);
	cout<<"\n";
}
signed main(){
    cpbhai
	int tc; cin>>tc;
	for(int i=1; i<=tc; ++i){
		cout<<"Case #"<<i<<": ";
		solve();
	}
    return 0;
}
