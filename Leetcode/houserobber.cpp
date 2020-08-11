/*
  Link  : https://leetcode.com/problems/house-robber/
*/
class Solution {
public:
    int rob(vector<int>& nums){
	int n=(int)nums.size();
	if(n == 0) return 0;
	if(n == 1) return nums[0];
	if(n == 2) return max(nums[0], nums[1]);
	int a=0, b=nums[0], c=max(nums[0], nums[1]);
	for(int i=3; i<=n; i++){
		int d=max(max(a,b) + nums[i-1], c);
		a=b;
		b=c;
		c=d;
	}
	return c;
}
};
