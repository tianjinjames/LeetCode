/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Remove Element.
			  Given an array and a value, remove all instances of that value in place and return the new length.
			  Do not allocate extra space for another array, you must do this in place with constant memory.
			  The order of elements can be changed. It doesn't matter what you leave beyond the new length.
Example		: Given input array nums = [3,2,2,3], val = 3.
			  Your function should return length = 2, with the first two elements of nums being 2.
Source      : https://leetcode.com/problems/remove-element/
*******************************************/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == val){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};