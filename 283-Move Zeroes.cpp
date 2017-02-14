/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Move Zeroes. Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Example		: Given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
Source      : https://leetcode.com/problems/move-zeroes/
*******************************************/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                nums.erase(nums.begin() + i);
                count++;
                i--;
            }
        }
        nums.insert(nums.end(), count, 0);
    }
};