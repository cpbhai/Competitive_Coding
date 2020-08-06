/*
	Author	:	harshvcode
	Link	:	https://codeforces.com/contest/1399/problem/A?f0a28=1
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ui = unsigned int;
using ull = unsigned long long;
typedef vector<int> vi;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
	return (ull)rng() % B;
}
const int MOD = 1000000007;
const char nl = '\n';
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define iofile freopen("inp.txt", "r", stdin);freopen("out.txt", "w", stdout);
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define fi first
#define se second
clock_t startTime;
double getCurrentTime() {
	cout << "Execution Time: ";
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
void solve(){
	int n;
	cin >> n;
	set<int> A;
	int v;
	while(n--){
		cin >> v;
		A.insert(v);
	}
	if((int)A.size() == *A.rbegin()- *A.begin() + 1) cout << "YES\n"; else cout << "NO\n";
}
int main(){
	#ifndef ONLINE_JUDGE
    	iofile;
  	#endif    
		fast;
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
	return 0;
}