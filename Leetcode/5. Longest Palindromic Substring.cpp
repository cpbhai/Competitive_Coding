//https://leetcode.com/problems/longest-palindromic-substring/
class Solution {
public:
    string longestPalindrome(string s) {//O(n^2), DP
        int n=(int)s.size();
        int dp[n][n];
        memset(dp, 0, sizeof(dp));
        int ans_st=0, ans_end=0, maxlen=1;
        for(int i=0; i<n; ++i) dp[i][i]=1;//all 1 len chars are pal
        for(int i=0; i<n-1; ++i){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                if(maxlen<2) ans_st=i; ans_end=i+1; maxlen=2;
            }
        }
        for(int i=2; i<n; ++i){
            int k=i;//k is i
            for(int j=0; j<n && k<n; ++j, ++k){
                if(s[j]==s[k] && dp[j+1][k-1]){
                    dp[j][k]=1;
                    if(maxlen<(k-j+1)){ ans_st=j; ans_end=k; maxlen=max(maxlen, k-j+1);}
                }
            }
        }
        return s.substr(ans_st, maxlen);//2nd arg is maxlen
    }
};
