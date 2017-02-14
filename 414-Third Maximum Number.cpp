/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Third Maximum Number.
			  Given a non-empty array of integers, return the third maximum number in this array. 
			  If it does not exist, return the maximum number. The time complexity must be in O(n).
Example 1	: Input: [3, 2, 1]
			  Output: 1
			  Explanation: The third maximum is 1.
Example 2 	: Input: [1, 2]
			  Output: 2
			  Explanation: The third maximum does not exist, so the maximum (2) is returned instead.
Example 3	: Input: [2, 2, 3, 1]
			  Output: 1
			  Explanation: Note that the third maximum here means the third maximum distinct number.
			  Both numbers with value 2 are both considered as second maximum.
Source      : https://leetcode.com/problems/third-maximum-number/
*******************************************/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int>> myTable (nums.begin(), nums.end());
        auto it = myTable.begin();
        if (myTable.size() >= 3){
            advance(it, 2);
            return *it;
        }
        return *it;
    }
};