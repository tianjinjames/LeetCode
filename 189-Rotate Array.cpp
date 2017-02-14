/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Rotate Array.
			  Rotate an array of n elements to the right by k steps..
Example		: With n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
Source      : https://leetcode.com/problems/rotate-array/
*******************************************/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if ( k != 0 && nums.size() != 1){
        vector<int> temp (nums.end() - k, nums.end());
        nums.insert(nums.begin(), temp.begin(), temp.end());
        nums.erase(nums.end() - k, nums.end());}
    }
};