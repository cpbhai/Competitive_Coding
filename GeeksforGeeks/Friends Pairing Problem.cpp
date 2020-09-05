//Link  : https://practice.geeksforgeeks.org/problems/friends-pairing-problem/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, x) for(int i=a; (x > 0)?i<=b:i>=b; i+=x)
#define sz(x) (int)x.size()

const int mod = 1000000007, max_n=100;
long long int dp[max_n+1];

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif*/
	//PRE-COMPUTING FOR DP TABLE
	dp[0]=dp[1]=1;//__BASE__CASES__
	fr(i, 2, max_n, 1){
		dp[i]=(dp[i-1]%mod + ((i-1) * dp[i-2]) % mod) % mod;
	}
	//TILL THIS STEP DP TABLE COMPUTED__
	int32_t tt;
	cin >> tt;
	while(tt--){
		int32_t n;
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}
