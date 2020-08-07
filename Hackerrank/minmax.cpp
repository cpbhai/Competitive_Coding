/*
    Author    :    harshvcode
    Link      :    https://www.hackerrank.com/challenges/mini-max-sum/problem
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ui = unsigned int;
using ull = unsigned long long;
typedef vector<int> vi;
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
#define iofile freopen("inp.txt", "r", stdin);freopen("out.txt", "w", stdout);
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define fi first
#define se second
clock_t startTime;
double getCurrentTime() {
    cout << "Execution Time: ";
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
int main(){
    //#ifndef ONLINE_JUDGE
      //  iofile;
      //#endif    
        fast;
    vector<ll> arr(5,0);
    ll i=0;
    for(i=0; i<5; i++) cin >> arr[i];
    sort(all(arr));
    vector<ll>::iterator it;
    i=0L;
    for(it=arr.begin(); it!=arr.end()-1; it++) i+=*it;
    cout << i << ' ';
    i=0L;
    for(it=arr.begin()+1; it!=arr.end(); it++) i+=*it;
    cout << i;
    return 0;
}
