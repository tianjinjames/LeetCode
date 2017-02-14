/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Missing Number.
			  Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
Example		: Given nums = [0, 1, 3] return 2.
Source      : https://leetcode.com/problems/missing-number/
*******************************************/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        for(int i = 0; i < nums.size(); i++){
            result ^= nums[i];
            result ^= i;
        }
        return result;
    }
};