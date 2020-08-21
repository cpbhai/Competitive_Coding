//Link  : https://www.hackerrank.com/challenges/electronics-shop/problem
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
    int s,n,m;
    cin >> s >> n >> m;
    
    VT<int> k(n),u(m);
    for (auto& e : k)
        cin >> e;
    for (auto& e : u)
        cin >> e;
    
    int max_spent = -1;
    for (int i = 0,j,t; i < k.size(); ++i) {
        for (j = 0; j < u.size(); ++j) {
            t = k[i] + u[j];
            if (t > max_spent && t <= s) {
                max_spent = t;
            }
        }
    }
    cout << max_spent << '\n';
}
