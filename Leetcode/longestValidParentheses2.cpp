/*
  Link  : https://leetcode.com/problems/longest-valid-parentheses/
*/
class Solution {
public:
    int longestValidParentheses(string s) {
	int n=(int)s.size();
    if(n == 0) return 0;
    int dp[n];
    memset(dp,0,sizeof(dp));
    int best=0;
    for(int i=1; i<n; i++){
    	if(s[i] == ')'){
    		if(s[i-1]=='(') dp[i]=2+ (i-2>=0 ? dp[i-2]:0);
    		else if(i-dp[i-1] > 0 && s[i-dp[i-1]-1] == '('){
    			dp[i]=dp[i-1]+2+(i-dp[i-1]-2>=0 ? dp[i-dp[i-1]-2]:0);
    		}
    	}
    	best=max(best, dp[i]);
    }
   return best;
}
};
