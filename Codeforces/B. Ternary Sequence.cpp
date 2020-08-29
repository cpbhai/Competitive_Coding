//Link  : https://codeforces.com/contest/1401/problem/B
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
		int x1, y1, z1, x2, y2, z2;
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		int tot=0;
		int tmp=min(z1, y2);
		z1-=tmp;
		y2-=tmp;
		tot=tmp * 2;
		tmp=min(y1, x2+y2);
		y1-=tmp;
		if(y1)
			tot-=y1 * 2;
		cout << tot << '\n';
	}
	return 0;
}
