/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Search Insert Position.
			  Given a sorted array and a target value, return the index if the target is found. 
			  If not, return the index where it would be if it were inserted in order.
			  You may assume no duplicates in the array.
Examples	: [1,3,5,6], 5 → 2
			  [1,3,5,6], 2 → 1
			  [1,3,5,6], 7 → 4
			  [1,3,5,6], 0 → 0
Source      : https://leetcode.com/problems/search-insert-position/
*******************************************/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        while(start <= end){
            int mid = (start+end)/2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid +1;
                
            if (mid == start || mid == end){
                if (target < nums[mid])
                    return mid;
                else
                    return mid + 1;
            }
        }
        return 0;
    }
};