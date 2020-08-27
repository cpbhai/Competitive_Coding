/*
__________By__________
______harshvcode______
*/
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
#define MP make_pair
mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randnum(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(mt_rng);
}
template<class T>
string boolstr(T v){
	if(v) return "true";
	return "false";
}
string seqstr(VT<int>& arr, const string& delim){
	string p="";
	VT<int>::iterator last=arr.end() - 1;
	for(VT<int>::iterator itr=arr.begin(); itr != arr.end(); ++itr){
		p+=to_string(*itr);
		if(itr != last) p+=delim;
	}
	return p;
}
VT<string> split(string& s, const char* delim){
	VT<string> ret;
	for(auto i=strtok(&s[0], delim); i!=NULL; i=strtok(NULL, delim))
		ret.PB(i);
	return ret;
}
int cntstr(string& s, string& sb){
	int ans=0, lens=SZ(s), lensb=SZ(sb);
	FR(i, 0, lens-lensb, 1)
		ans+=s.substr(i, lensb) == sb;
	return ans;
}
void replace(string& s, const string& sb){
	int lensb=SZ(sb);
	for(int i=0; i<SZ(s); i++){
		if(s.substr(i, lensb) == sb) s.replace(i--, lensb, "");
	}
}
template<class T>
T pow(T a, T b){
   	T res=1;
    while(b > 0){
        if(b & 1)
        	res=res*a;
        a=a*a;
        b>>=1;
    }
    return res;
}
void SieveOfEratosthenes(int n) 
{
    VT<bool> prime(n+1, 1);
	for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p]) 
        {
            for (int i=p*2; i<=n; i += p) 
                prime[i] = 0; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
}
const int MAXN = 1e6+5;
int isPrime[MAXN];

void sieve(){
	isPrime[0] = isPrime[1] = 1;
	for(int i = 2;i*i <= 1000000; i++){
		if(isPrime[i] == 0){
			if(i*1LL*i <= 1000000){
				for(int j = i*i;j <= 1000000; j += i)
					isPrime[j] = 1;
			}
		}
	}
}

int cnt[MAXN];
bool toBeAfraid(ll num){
	ll dig = 0;
	ll tmpNum = num;
	while(num > 0){
		if(num%10 == 0)
			return false;
		dig++;
		num /= 10;
	}
	ll div =pow(10LL, dig-1);
	num = tmpNum;
	while(num > 0){
		num %= div;
		div /= 10;
		if((num != 0 && isPrime[num] == 1))
			return false;
	}
	return true;
}
void precal(){
	for(int i = 2;i <= 1000000; i++){
		cnt[i] = cnt[i-1];
		if(isPrime[i] == 0){
			if(toBeAfraid(i))
				cnt[i]++;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("inp.txt","r", stdin);
	sieve();
    precal();
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout << cnt[n] << endl;
    }
	return 0;
}
