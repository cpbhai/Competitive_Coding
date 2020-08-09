/*
  Author  : harshvcode
  Link  : https://codeforces.com/contest/1391/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ui = unsigned int;
using ull = unsigned long long;
typedef vector<int> vi;
clock_t start;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
	return (ull)rng() % B;
}
const int MOD = 1000000007;
const char nl = '\n';
#define pb push_back
#define mp make_pair
#define sz(any) (int)(any.size())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
void getCurrentTime(clock_t& startTime) {
	printf("\n[Execution Time: %.6fs]\n",(double)(clock() - startTime) / CLOCKS_PER_SEC);
}
void solve(){
	int n;
	cin >> n;
	if(n == 1){
		cout << 1 << nl;
		return;
	}
	vi arr(n, 0);
	int i=0;
	for(i=0; i<n; i++) arr[i]=i+1;
	while(next_permutation(all(arr))){
		int sit=arr[0] | arr[1];
		i=1;
		for(i=1; i<n; i++) sit=sit | arr[i];
		if(sit >= n){
			for(int e:arr) cout << e << ' ';
			cout << nl;
			return;
		}
	}
	for(int e:arr) cout << e << ' ';
	cout << nl;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("inp.txt","r",stdin);
		freopen("out.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
	return 0;
}
