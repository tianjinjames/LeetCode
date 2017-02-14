/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 14:49
Description : Max Consecutive Ones. Given a binary array, find the maximum number of consecutive 1s in this array.
Example		: Input: [1,1,0,1,1,1]
			  Output: 3
			  Explanation: The first two digits or the last three digits are consecutive 1s.
				    	   The maximum number of consecutive 1s is 3.
Note		: The input array will only contain 0 and 1. The length of input array is a positive integer and will not exceed 10,000
Source      : https://leetcode.com/problems/max-consecutive-ones/
*******************************************/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int pos = 0, count = 0, temp = 0;
        while (pos != nums.size()){
            if (nums[pos] == 1){
                temp++;
                count = max(temp, count);
            }
            else
                temp = 0;
            pos++;
        }
        return count;
    }
};