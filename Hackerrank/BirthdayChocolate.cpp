//Link  : https://www.hackerrank.com/challenges/the-birthday-bar/problem
/*****Author    :    harshvcode*****/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define VT vector
#define PB push_back
#define ALL(c) (c).begin(),(c).end()
#define SZ(x) (int)(x).size()
#define FR(i, a, b, s) for (int i=(a); (s)>0?i<=(b):i>=(b); i+=(s))
#define ECH(x, a) for (auto& x: a)
#define F first
#define S second
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randnum(ll a, ll b) {
    return uniform_int_distribution<ll>(a, b)(mt_rng);
}
template<class T>
string tostr(T v){
    if(v) return "true";
    return "false";
}
string seqstr(VT<int>& arr, const string& delim){
    string p="";
    ECH(x, arr) p+=to_string(x)+delim;
    return p.substr(0, p.size()-1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    VT<int> arr(n, 0);
    FR(i, 0, n-1, 1) cin >> arr[i];
    int a, b, cnt=0;
    cin >> a >> b;
    for(int i=0; i<n-b+1; i++){
        int sm=0;
        for(int j=i; j<i+b; j++) sm+=arr[j];
        if(sm == a) cnt++;
    }
    cout << cnt;
    return 0;
}
