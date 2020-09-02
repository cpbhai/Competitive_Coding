//Link  : https://practice.geeksforgeeks.org/problems/nth-fibonacci-number/0
//created by harshvcode at 02.09.2020 21:19:55
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, o) for(int i=a; (o > 0)?i<=b:i>=b; i+=o)
#define sz(x) (int)x.size

const int MAX_N=1e3 + 1;
int dp[MAX_N];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("inp.txt","r",stdin);
	dp[0]=dp[1]=dp[2]=1;
	fr(i, 3, MAX_N, 1) {
		dp[i]=(dp[i-1]+dp[i-2]) % 1000000007;
	}
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}
