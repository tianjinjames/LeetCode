/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Contains Duplicate.
			  Given an array of integers, find if the array contains any duplicates. 
			  Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
Source      : https://leetcode.com/problems/contains-duplicate
*******************************************/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s( nums.begin(), nums.end() );
        return (s.size()!=nums.size());
    }
};