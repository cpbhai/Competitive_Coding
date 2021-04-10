//#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
#define int ll
#define pb push_back
#define mp make_pair
#define REP(i,n) for (int i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define REPD(i,n) for (int i = n-1; i >= 0; i--)
#define FORD(i,a,b) for (int i = a; i >= b; i--)
#define remax(a,b) a = max(a,b)
#define remin(a,b) a = min(a,b)
#define all(v) v.begin(),v.end()
typedef map<int,int> mii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define F first
#define S second
#define PQ(type) priority_queue<type>
#define PQD(type) priority_queue<type,vector<type>,greater<type> >
#define WL(t) while(t--)
#define SZ(x) ((int)(x).size())
#define inrange(i,a,b) ((i>=min(a,b)) && (i<=max(a,b))
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solvethetestcase()
{
    int tab[3][3];
    bool result[3][3];
    int i, j;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            result[i][j] = true;
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cin >> tab[i][j];
    }
    
    if(tab[0][0]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        //result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
    }
    if(tab[1][0]%2 != 0)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[2][0] = !result[2][0];
        //result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        //result[2][1] = !result[2][1];
    }
    if(tab[2][0]%2 != 0)
    {
        //result[1][1] = !result[1][1];
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
    }
    if(tab[0][1]%2 != 0)
    {
        result[0][0] = !result[0][0];
        //result[1][0] = !result[1][0];
        result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        //result[1][2] = !result[1][2];
        result[0][2] = !result[0][2];
    }
    if(tab[1][1]%2 != 0)
    {
        result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
        result[1][2] = !result[1][2];
    }
    if(tab[2][1]%2 != 0)
    {
        //result[1][0] = !result[1][0];
        result[1][1] = !result[1][1];
        //result[1][2] = !result[1][2];
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[2][2] = !result[2][2];
    }
    if(tab[0][2]%2 != 0)
    {
        //result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
        result[0][2] = !result[0][2];
        result[1][2] = !result[1][2];
    }
    if(tab[1][2]%2 != 0)
    {
        //result[0][1] = !result[0][1];
        result[0][2] = !result[0][2];
        result[1][1] = !result[1][1];
        result[1][2] = !result[1][2];
        //result[2][1] = !result[2][1];
        result[2][2] = !result[2][2];
    }
    if(tab[2][2]%2 != 0)
    {
        result[2][2] = !result[2][2];
        result[2][1] = !result[2][1];
        result[1][2] = !result[1][2];
        //result[1][1] = !result[1][1];
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(result[i][j]) cout << 1;
            else cout << 0;
        }
        cout << '\n';
    }
}
signed main()
{
    FAST_IO
    int t = 1;
    //cin >> t;
    FOR(testcase,1,t+1)
    {
        solvethetestcase();
    }
}