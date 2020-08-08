/*
  Author  : harshvcode
  Link  : https://leetcode.com/problems/median-of-two-sorted-arrays
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n=(int) nums1.size();
        return (n % 2 == 0) ? (double)(nums1[n/2]+nums1[(n/2)-1])/2:(double)nums1[n/2];
    }
};
