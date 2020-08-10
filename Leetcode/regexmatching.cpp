//Link  :   https://leetcode.com/problems/regular-expression-matching/
class Solution {
public:
    bool isMatch(string s, string p) {
        regex b(p);
        if(regex_match(s,b)) return true;
        return false;
    }
};
