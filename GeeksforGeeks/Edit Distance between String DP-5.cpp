//Problem: https://www.geeksforgeeks.org/edit-distance-dp-5/
//Editor: https://practice.geeksforgeeks.org/problems/edit-distance3702/1#
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        int ns=s.size(), nt=t.size();
        int dp[ns+1][nt+1];
        for(int i=0; i<=ns; ++i){
            for(int j=0; j<=nt; ++j){
                if(i==0) dp[i][j]=j;
                else if(j==0)dp[i][j]=i;
                else if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=1+min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
            }
        }
        return dp[ns][nt];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
