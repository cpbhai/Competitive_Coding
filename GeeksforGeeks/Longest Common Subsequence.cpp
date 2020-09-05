//Link  : https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, x) for(int i=a; (x > 0)?i<=b:i>=b; i+=x)
#define sz(x) (int)x.size()

const int max_n=100;
int dp[max_n+1][max_n+1];
int lcs(string mstr, string nstr, int m, int n){
	int i, j;
	for(i=0; i<=m; i++){
		for(j=0; j<=n; j++){
			if(i == 0 || j == 0)
				dp[i][j]=0;
			else if(mstr[i-1] == nstr[j-1])
				dp[i][j]=1 + dp[i-1][j-1];
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[m][n];
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
		int m, n;
		cin >> m >> n;
		string mstr, nstr;
		cin >> mstr >> nstr;
		cout << lcs(mstr, nstr, m, n) << '\n';
	}
	return 0;
}
