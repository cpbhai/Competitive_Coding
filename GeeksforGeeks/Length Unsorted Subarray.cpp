//Link  :   https://practice.geeksforgeeks.org/problems/length-unsorted-subarray/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, x) for(int i=a; (x > 0)?i<=b:i>=b; i+=x)
#define sz(x) (int)x.size()

void solve(vector<int>& arr, const int& n){
	int v1=-1, v2=-1;
	int i=0;
	bool allsorted=1;
	for(i=0; i<n-1; i++){
		if(arr[i] > arr[i+1]){
		    allsorted=0;
			v1=i;
			break;
		}
	}
	if(allsorted){ cout << 0 << ' ' << 0 << '\n'; return;}//Basecase if array is already sorted
	i=n-1;
	for(; i>0 ; i--){
		if(arr[i] < arr[i-1]){
			v2=i;
			break;
		}
	}
	int maxi=arr[v1], mini=INT_MAX;
	for(int i=v1; i<=v2; i++){
		maxi=max(maxi, arr[i]);
		mini=min(mini, arr[i]);
	}
	i=n-1;
	for(; i>=0; i--){
		if(arr[i] < maxi){
			v2=i;
			break;
		}
	}
	i=0;
	for(; i<n; i++){
		if(arr[i] > mini){
			v1=i;
			break;
		}
	}
	cout << v1 << ' ' << v2 << '\n';
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif*/
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		vector<int> arr(n, 0);
		for(int &e:arr) cin >> e;
		solve(arr, n);
	}
	return 0;
}
