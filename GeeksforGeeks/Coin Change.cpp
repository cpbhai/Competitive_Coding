//Link  :   https://practice.geeksforgeeks.org/problems/coin-change/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, x) for(int i=a; (x > 0)?i<=b:i>=b; i+=x)
#define sz(x) (int)x.size()

const int max_n=300;
int dp[max_n+1];
int countways(vector<int> S, int m, int n){
	memset(dp, 0, sizeof dp);
	dp[0]=1;
	for(int i=0; i<m; i++){
		for(int j=S[i]; j<=n; j++){
			dp[j]+=dp[j-S[i]];
		}
	}
	return dp[n];
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif*/
	int tt;
	cin >> tt;
	while(tt--){
		int m, n;
		cin >> m;
		vector<int> S(m, 0);
		for(int i=0; i<m ;i++) cin >> S[i];
		cin >> n;
		cout << countways(S, m, n) << '\n';
	}
	return 0;
}
