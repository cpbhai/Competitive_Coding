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
string seqstr(VT<string>& arr, const string& delim){//To make string of array elements
    string p="";
    ECH(x, arr) p+=x+delim;
    return p.substr(0, p.size()-1);
}
void solve(){
    string s;
    cin >> s;
    VT<string> arr;
    for(auto i=strtok(&s[0], ":"); i!=NULL; i=strtok(NULL, ":"))
        arr.PB(i);
    string t=arr[2];
    arr[2]=t.substr(0, 2);
    arr.PB(t.substr(2));
    if(arr[3] == "PM"){
        if(stoi(arr[0]) != 12) arr[0]=to_string(stoi(arr[0]) + 12);
        arr.erase(arr.begin()+3);
        cout << seqstr(arr, ":");
        return;
    }
    if(arr[0] == "12" && arr[3] == "AM"){
        arr[0]="00";
        arr.erase(arr.begin()+3);
        cout << seqstr(arr, ":");
        return;
    }
    arr.erase(arr.begin()+3);
    cout << seqstr(arr, ":");
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
