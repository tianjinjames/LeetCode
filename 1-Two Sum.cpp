/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Two Sum.
			  Given an array of integers, return indices of the two numbers such that they add up to a specific target.
			  You may assume that each input would have exactly one solution, and you may not use the same element twice.
Example		: Given nums = [2, 7, 11, 15], target = 9,
			  Because nums[0] + nums[1] = 2 + 7 = 9, return [0, 1].
Source      : https://leetcode.com/problems/two-sum/
*******************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++)
            hash.insert(make_pair(nums[i],i));
            
        for (int i = 0; i < nums.size(); i++){
            auto it = hash.find(target-nums[i]);
            if (it != hash.end() && it->second != i)
                return {i, hash[target-nums[i]]};
        }
        return {};
    }
};