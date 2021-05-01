//Problem: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution {
public:
    vector<string> key{"0","1", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void dfs(int i, string& s, string res, vector<string>& ans){
        int n=s.size();
        if(i==n) return;
        string path=key[(int)s[i]-48];
        for(int j=0; j<path.size(); ++j){
            string arg=(res+path[j]);
            if(arg.size()==n) ans.push_back(arg);
            dfs(i+1,s, arg, ans);
        }
    }
    vector<string> letterCombinations(string digits){
        int n=digits.size();
        if(n==0) return{};
        vector<string> ans;
        string res="";
        dfs(0, digits, res, ans);
        return ans;
    }
};
