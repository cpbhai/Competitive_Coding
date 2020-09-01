//Link  : https://codeforces.com/contest/1397/problem/A
//created by harshvcode at 18:26 01-09-2020
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fr(i, a, b, o) for(int i=a; (o > 0)?i<=b:i>=b; i+=o)
#define sz(x) (int)x.size()
string solve(map<char, int>& mapp, const int& n){
	for(auto& e:mapp)
		if(e.second % n != 0) return "NO\n";
	return "YES\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("inp.txt","r",stdin);
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		map<char, int> mapp;
		fr(i, 1, n, 1){
			string s;
			cin >> s;
			for(char& e:s) mapp[e]++;
		}
			cout << solve(mapp, n);
	}
	return 0;
}
