#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
typedef long double LD;
typedef long long LL;
#define PB push_back
#define MP make_pair
#define FR(i, a, b, s) for (auto i=(a); (s)>0?i<=(b):i>=(b); i+=(s))
#define CAMAX(a,b) a = max(a,b)
#define CAMIN(a,b) a = min(a,b)
#define ALL(v) v.begin(),v.end()
typedef map<int,int> MII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef pair<int,int> PII;
typedef vector<PII> VPII;
#define F first
#define S second
#define SB(x) __builtin_popcountll(x)
#define ZB(x) __builtin_ctzll(x)
#define MOD 1000000007
#define INF 1e18
#define PQ(type) priority_queue<type>
#define PQD(type) priority_queue<type,vector<type>,greater<type> >
#define WL(t) while(t--)
#define SZ(x) ((int)(x).size())
#define INRNG(i,a,b) ((i>=min(a,b)) && (i<=max(a,b)))
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    bitset<101> bs;
    int n;
    cin >> n;
    int x;
    set<int> arr;
    deque<int> q;
    FR(i, 0, n - 1, 1)
    {
        cin >> x;
        if(bs.test(x)) q.push_back(x);
        else { bs.set(x); arr.insert(x); }
    }
    for(auto e : arr) cout << e << " ";
    while(q.size() > 0)
    {
        cout << q.front() << " "; q.pop_front();
    }
    cout << "\n";
}
signed main()
{
    FAST_IO
    int ntc = 1;
    cin >> ntc;
    FR(tc, 1, ntc, 1)
    {
        solve();
    }
}
