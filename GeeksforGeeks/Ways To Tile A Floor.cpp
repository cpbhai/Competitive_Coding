//Link  : https://practice.geeksforgeeks.org/problems/ways-to-tile-a-floor/0
//Program is same as nth fibonacci with only difference: return fib[n+1] instead if fib[n]. see line 26: dp[n+1], not dp[n]
//created by harshvcode at 03.09.2020 20:19:55
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, o) for(int i=a; (o > 0)?i<=b:i>=b; i+=o)
#define sz(x) (int)x.size()

const int MAX_N=71 + 1;
ll dp[MAX_N];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("inp.txt","r",stdin);
	dp[0]=dp[1]=dp[2]=1;
	fr(i, 3, MAX_N, 1) {
		dp[i]=((ll)dp[i-1]+dp[i-2]);
	}
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		cout << dp[n+1] << '\n';
	}
	return 0;
}
