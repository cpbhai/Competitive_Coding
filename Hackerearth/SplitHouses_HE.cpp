/*
	Author	:	Harshvardhan Singh (harshvcode)
	Problem	:	Split houses
	Link	:	https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	bool can_partition=false;
	for(int i=0; i<n; i++){
		if(s[i] == 'H' && s[i+1] == 'H'){
			can_partition=true;
			break;
		}else if(s[i] == '.') s.replace(i--,1,"B");
	}
	if(! can_partition) cout << "YES\n" << s << '\n';
	else cout << "NO\n";
	return 0;
}
