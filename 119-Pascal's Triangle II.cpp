/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Pascal's Triangle II.
			  Given an index k, return the kth row of the Pascal's triangle..
Example		: Given k = 3, Return [1,3,3,1].	  
Source      : https://leetcode.com/problems/pascals-triangle-ii/
*******************************************/

class Solution {
public:
    vector<int> getRow(int num) {
        vector<int> cur;

        for (int i = 0; i <= num; i++){
            vector<int> prev (i+1,1);
            for (int j = 1; j < i; j++)
                prev[j] = cur[j-1] + cur[j];
            cur = prev;
        }
        return cur;
    }
};