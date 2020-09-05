//Link  : https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, x) for(int i=a; (x > 0)?i<=b:i>=b; i+=x)
#define sz(x) (int)x.size()

int lrs(string str, int n){
	int dp[n+1][n+1];
	memset(dp, 0, sizeof dp);
	int i, j;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(str[i-1] == str[j-1] && i != j)
				dp[i][j]=1 + dp[i-1][j-1];
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[n][n];
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif*/
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout << lrs(s, n) << '\n';
	}
	return 0;
}
