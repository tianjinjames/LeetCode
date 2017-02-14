/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Contains Duplicate II.
			  Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.
Source      : https://leetcode.com/problems/contains-duplicate-ii/
*******************************************/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k == 0 || nums.size() == 0)  return false;
        unordered_set<int> myset;
        // Maintain a set of size k, whenever a value is found in set, return true
        for(int i = 0; i < nums.size(); i++){
            if(myset.find(nums[i]) != myset.end())   return true;
            else{
                if(myset.size() == k)
                    myset.erase(nums[i - k]);
                myset.insert(nums[i]);
            }
        }
        return false;
    }
};