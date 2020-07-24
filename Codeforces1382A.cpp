/*
    harshvcode
    A. Common Subsequence Codeforces
    https://codeforces.com/problemset/problem/1382/A
*/
#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(arr) arr.begin(),arr.end()
typedef long long LL;
typedef vector<int> VI;
typedef pair<int,int> PI;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int n, m, v;
		cin >> n >> m;
		map<int, int> mp1;
		while(n--){
			cin >> v;
			mp1[v]++;
		}
		bool found=false;
		int cm=v;
		while(m--){
			cin >> v;
			if(!found && mp1.find(v) != mp1.end()){
				found=true;
				cm=v;
			}
		}
		if(found) cout << "YES\n" << 1 << ' ' << cm << '\n';
		else cout << "NO\n";
    }
	return 0;
}