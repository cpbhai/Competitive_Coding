/*
_._._._._neloho_._._._._
Codechef ADAKING
https://www.codechef.com/JULY20B/problems/ADAKING
*/
#include<bits/stdc++.h>
using namespace std;
#define FI(n) for(int i=0;i<n;i++)
#define ALL(arr) arr.begin(),arr.end()
#define NL '\n'
#define PB push_back
#define MP make_pair
#define W int tt;cin>>tt;while(tt--)
#define Q ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main() {
    Q;
	W{
        int k;
        cin>>k;
        char chess[8][8];
        chess[0][0]='O';
        k--;
        for(int row=0;row<8;row++){
            for(int column=0;column<8;column++)
        {
                if(row==0 && column==0)
                continue;
                if(k)
                    {
                        chess[row][column]='.';
                        k--;
                    }
                else{
                chess[row][column]='X';
                    }
            
        }}
        for(int row=0;row<8;row++)
        {
            for(int column=0;column<8;column++)
            {
                cout<<chess[row][column];
            }
            cout<<endl;
        }

    }
}
