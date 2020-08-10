/*
  Author: harshvcode
  Link  : https://leetcode.com/problems/longest-palindromic-substring
*/
#define sz(s) (int)(s).size()
class Solution {
public:
    string longestPalindrome(string s) {
        int n=sz(s);
        if(n == 0) return "";
        bool table[n][n];
        memset(table,0, sizeof(table));
        for(int i=0;i<n;i++) table[i][i]=true;
        int maxlen=1;
        int start=0;
        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                table[i][i+1]=true;
                start=i;
                maxlen=2;
            }
        }
        for(int k=3; k<=n; k++){
            for(int i=0; i<n-k+1; i++){
                int j=i+k-1;
                if(table[i+1][j-1] && s[i]==s[j]){
                    table[i][j]=true;
                    if(k > maxlen){
                        maxlen=k;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,maxlen);
    }
};
