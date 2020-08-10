/*
  Author  : harshvcode
  Link  : https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ui = unsigned int;
using ull = unsigned long long;
typedef vector<int> vi;
clock_t start;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
    return (ull)rng() % B;
}
const int MOD = 1000000007;
const char nl = '\n';
#define pb push_back
#define mp make_pair
#define sz(any) (int)(any.size())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
void getCurrentTime(clock_t& startTime) {
    printf("\n[Execution Time: %.6fs]\n",(double)(clock() - startTime) / CLOCKS_PER_SEC);
}
int main(){
    /*#ifndef ONLINE_JUDGE
        freopen("inp.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif*/
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int rankm=1;
    vi arr(n,0);
    map<int, int> rank;
    for(int i=0; i<n ;i++){
        cin >> arr[i];
        if(rank[arr[i]]) continue; else rank[arr[i]]=rankm++;
    }
    int m;
    cin >> m;
    int v;
    sort(all(arr));
    while(m--){
        cin >> v;
        int pos=*lower_bound(all(arr),v);
        if(pos == v) cout << rank[pos] << nl; else cout << rank[pos]+1 << nl;
    }   
    return 0;
}
