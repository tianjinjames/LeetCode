/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 15:49
Description : Find All Numbers Disappeared in an Array. 
			  Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.
			  Find all the elements of [1, n] inclusive that do not appear in this array.
			  Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.
Example		: Input: [4,3,2,7,8,2,3,1]
			  Output:[5,6]
Source      : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
*******************************************/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]);
        }
        
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0)    result.push_back(i+1);
        }
        
        return result;
    }
};