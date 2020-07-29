/*
	Author	:	Harshvardhan Singh (harshvcode)
	Problem	:	B. Alchemy [ Qualification Round ]
	Link	:	https://www.facebook.com/codingcompetitions/hacker-cup/2020/qualification-round/problems/B
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
char most(string sub){
	int cou=0;
	for(char e:sub)
		if(e=='A') cou--;
		else cou++;
	return (cou > 0) ? 'B' : 'A';
}
char solve(string& s, int& n){
	if(n==3 && s[0]==s[1] && s[1]==s[2]) return 'N';
	int i=0;
	for(i=0; i<n-2; i++){
		if(n>=3 && s[i]==s[i+1] && s[i+1]==s[i+2]) i++;
		if(i>=n-2) return 'N';
		if(!(s[i]==s[i+1] && s[i+1]==s[i+2])){
			s.replace(i,3,string(1,most(s.substr(i,3))));
			i=-1;
			n-=2;
		}
	}
	return 'Y';
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("inp2.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int tt;
	cin >> tt;
	for(int i=0; i<tt; i++){
		cout << "Case #" << i + 1 << ": ";
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout << solve(s, n) << '\n';
	}
	return 0;
}
