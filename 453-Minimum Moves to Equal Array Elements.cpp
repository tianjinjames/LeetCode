/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Minimum Moves to Equal Array Elements.
			  Given a non-empty integer array of size n, find the minimum number of moves required to make all array elements equal, 
			  where a move is incrementing n - 1 elements by 1.
Example		: Input:  [1,2,3]
			  Output: 3
Explanation : Only three moves are needed (remember each move increments two elements): 
			  [1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
Source      : https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
*******************************************/

/* Note:
    n - size of input array
    k - total # of moves to reach the target
    min - min element in the array before any change
    sum - sum of all #s in the array before any change
    
    We have the equation that (min+k) * n = sum + k(n-1)
            k = sum - min*n
*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size() == 0)    return 0;
        int minEle = nums[0], sum = 0, n = nums.size();
        for (int p : nums){
            minEle = min(minEle, p);
            sum += p;
        }
        return abs(sum - minEle * n);
    }
};