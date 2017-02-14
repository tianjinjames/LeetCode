/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Pascal's Triangle.
			  Given numRows, generate the first numRows of Pascal's triangle.
Example		: For example, given numRows = 5. Return
				[
				     [1],
				    [1,1],
				   [1,2,1],
				  [1,3,3,1],
				 [1,4,6,4,1]
				]
Source      : https://leetcode.com/problems/number-of-segments-in-a-string/
*******************************************/

class Solution {
public:
    vector<vector<int>> generate(int num) {
    vector<vector<int>> res;
        for(auto i=0;i<num;++i){
            res.push_back(vector<int>(i+1,1));
            for(auto j=1; j<i; ++j) 
				res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
        return res;
    }
};