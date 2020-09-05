//Link  : https://leetcode.com/problems/longest-common-subsequence/
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int t1=(int)text1.size(), t2=(int)text2.size();
        int dp[t1 + 1][t2 + 1];
        int i, j;
        for(i=0; i<=t1; i++){
            for(j=0; j<=t2; j++){
                if(i == 0 || j == 0)
                    dp[i][j]=0;
                else if(text1[i-1] == text2[j-1])
                    dp[i][j]=1 + dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[t1][t2];
    }
};
