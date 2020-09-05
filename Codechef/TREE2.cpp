//Link  : https://www.codechef.com/SEPT20B/problems/TREE2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, x) for(int i=a; (x > 0)?i<=b:i>=b; i+=x)
#define sz(x) (int)x.size()

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	int tt;
	cin >> tt;
	while(tt--){
		int n, val;
		cin >> n;
		set<int> st;
		bool zeroflag=0;
		fr(i, 1, n, 1){
			cin >> val;
			if(val == 0) zeroflag=1;
			st.insert(val);
		}
		cout << sz(st) - zeroflag << '\n';
	}
	return 0;
}
