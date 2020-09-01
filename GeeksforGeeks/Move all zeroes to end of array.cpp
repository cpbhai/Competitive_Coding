//Link  : https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array/0
//created by harshvcode at 17:28 01-09-2020
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fr(i, a, b, o) for(int i=a; (o > 0)?i<=b:i>=b; i+=o)
#define sz(x) (int)x.size()
void moveZer(vector<int>& arr, const int& z) {
	fr(i, 1, z, 1) arr.pb(0);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("inp.txt","r",stdin);
	int tt;
	cin >> tt;
	while(tt--){
	    int n, z=0, t=0;
	    cin >> n;
	    vector<int> arr;
	    fr(e, 1, n, 1){
	        cin >> t;
			if(t != 0) {
				arr.pb(t);
			}else z++;
	    }
	    moveZer(arr, z);
	    for(int& e: arr) cout << e << ' ';
	    cout << '\n';
	}
	return 0;
}
