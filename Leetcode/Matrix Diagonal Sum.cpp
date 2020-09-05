//Link  : https://leetcode.com/contest/biweekly-contest-34
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=(int) mat[0].size();
        bool enable=0;
        if(n % 2 != 0) enable=1;
        int k=0;
        int ans=0;
        for(int i=0; i<n; i++)
            ans+=mat[i][k++];
        k=n-1;
        for(int i=0; i<n; i++)
            ans+=mat[i][k--];
        if(enable) ans-=mat[n/2][n/2];
        return ans;
    }
};
