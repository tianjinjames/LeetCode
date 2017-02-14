/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Two Sum II - Input array is sorted.
			  Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.
			  The function twoSum should return indices of the two numbers such that they add up to the target, 
 			  where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
			  You may assume that each input would have exactly one solution and you may not use the same element twice.
Example		: Input: numbers={2, 7, 11, 15}, target=9. Output: index1=1, index2=2
Source      : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
*******************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int front = 0, back = nums.size() - 1;
        while(front < back){
            int curSum = nums[front] + nums[back];
            if (curSum == target)   return {front+1, back+1};
            else if (curSum > target)   back--;
            else    front++;
        }
        return {};
    }
};