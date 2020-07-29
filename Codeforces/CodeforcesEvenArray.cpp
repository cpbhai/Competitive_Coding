/*
_._._._._harshvcode_._._._._
Codeforces Even Array Solution
*/
#include<bits/stdc++.h>
using namespace std;
#define FI(n) for(int i=0;i<n;i++)
#define ALL(arr) arr.begin(),arr.end()
#define NL '\n'
#define PB push_back
#define MP make_pair
#define W int tt;cin>>tt;while(tt--)
#define Q ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main(){
	Q;
	W{
		int n,ans=0;
		cin>>n;
		int e=0,o=0;
		for(int i=0;i<n;i++){
			int v;
			cin>>v;
			if(v%2==0) e++; else o++;
			if(i%2==0 && v%2!=0) ans++;
			else if(i%2!=0 && v%2==0) ans++;
		}
		int er,dr;
		if(n%2==0){
			er=n/2;dr=n/2;
		}else
		{
			er=(n/2)+1;dr=n/2;
		}
		if(er!=e || dr!=o){
			cout<<-1<<NL;
		}else cout<<ans/2<<NL;
	}
	return 0;
}
