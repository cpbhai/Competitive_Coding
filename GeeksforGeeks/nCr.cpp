//Link  : https://practice.geeksforgeeks.org/problems/ncr/0
//created by harshvcode at 03.09.2020 19:46:45
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fr(i, a, b, o) for(int i=a; (o > 0)?i<=b:i>=b; i+=o)
#define sz(x) (int)x.size()

const int maxn = 1e3;
int C[maxn + 1][maxn + 1];
void init(){
  C[0][0] = 1;
  for (int n = 1; n <= maxn; ++n) {
    C[n][0] = C[n][n] = 1;
      for (int k = 1; k < n; ++k)
        C[n][k] = (C[n - 1][k - 1] + C[n - 1][k]) % 1000000007;
  }
}
int binom(int n, int r){
  return C[n][r];
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("inp.txt","r",stdin);
	init();
	int tt;
	cin >> tt;
	while(tt--){
	  int n, r;
	  cin >> n >> r;
	  cout << binom(n, r) << '\n';
	}
	return 0;

}
