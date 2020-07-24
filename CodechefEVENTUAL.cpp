/*
harshvcode | https://www.codechef.com/COOK120B/problems/EVENTUAL
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
string solve(map<char, int>& mp){
	for(auto e : mp)
		if(e.S % 2 != 0) return "NO\n";
	return "YES\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		map<char, int> mp;
		char c;
		while(n--){
			cin >> c;
			mp[c]++;
		}
		cout << solve(mp);
	}
	return 0;
}