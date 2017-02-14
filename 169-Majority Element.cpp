/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Majority Element.
			  Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
			  You may assume that the array is non-empty and the majority element always exist in the array.
Source      : https://leetcode.com/problems/majority-element/
*******************************************/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums[nums.size()/2] == nums[0])
            return nums[0];
        return nums[nums.size()/2];
    }
};