/*
  Link  : https://leetcode.com/problems/longest-valid-parentheses/
*/
class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int le=0, ri=0, ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='(') le++;
            else ri++;
            if(le<ri){ le=ri=0;}
            if(le==ri) ans=max(ans, le+ri);
        }
        le=ri=0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='(') le++;
            else ri++;
            if(le>ri){ le=ri=0;}
            if(le==ri) ans=max(ans, le+ri);
        }
        return ans;
    }
};
