/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Maximum Subarray.
			  Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
Examples	: Given the array [-2,1,-3,4,-1,2,1,-5,4], the contiguous subarray [4,-1,2,1] has the largest sum = 6.
Source      : https://leetcode.com/problems/maximum-subarray/
*******************************************/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int localmax = nums[0], globalmax = nums[0];
        for (int i = 1; i < nums.size(); i++){
            localmax = max(nums[i], nums[i]+localmax);
            globalmax = max(globalmax, localmax);
        }
        return globalmax;
    }
};