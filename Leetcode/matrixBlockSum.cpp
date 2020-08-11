/*
  Link  : https://leetcode.com/problems/matrix-block-sum/
*/
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>&v, int k) {
        int m=v.size();
        int n=v[0].size();
        vector<vector<int>>dp(m,vector<int>(n));
        dp[m-1][n-1]=v[m-1][n-1];
        for(int i=n-2;i>=0;i--) dp[m-1][i]=v[m-1][i]+dp[m-1][i+1];
        for(int i=m-2;i>=0;i--) dp[i][n-1]=v[i][n-1]+dp[i+1][n-1];
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                dp[i][j]=v[i][j]+dp[i][j+1]+dp[i+1][j]-dp[i+1][j+1];
            }
        }
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int p=max(0,i-k); int q=max(0,j-k);
                int r=min(m,i+k+1); int s=min(n,j+k+1);
                int a=r; int b=q;
                int c=p; int d=s;
                int val=dp[p][q];
                if(r<m and s<n) val=val+dp[r][s];
                if(a<m) val=val-dp[a][b];
                if(d<n) val=val-dp[c][d];
                ans[i][j]=val;
            }
        }
        return ans;
    }
};
