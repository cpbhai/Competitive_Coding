// Link : https://codeforces.com/contest/1401/problem/A
/*
__________By__________
______harshvcode______
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("inp.txt","r",stdin);
	int tt;
	cin >> tt;
	while(tt--){
		int n, k;
		cin >> n >> k;
		if(n < k) cout << k-n << '\n';
		else cout << ((n-k) % 2) << '\n'; // CAN CHANGE THIS LINE WITH "else cout << ((n-k) & 1) << '\n';" THIS WILL ALSO WORK
	}
	return 0;
}
