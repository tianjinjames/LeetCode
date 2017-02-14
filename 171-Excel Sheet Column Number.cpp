/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Excel Sheet Column Number.
			  Given a column title as appear in an Excel sheet, return its corresponding column number.
Example		: For example:
			    A -> 1
			    B -> 2
			    C -> 3
			    ...
			    Z -> 26
			    AA -> 27
			    AB -> 28 
Source      : https://leetcode.com/problems/excel-sheet-column-number/
*******************************************/

class Solution {
public:
    int titleToNumber(string s) {
        int result = 0, count = 0;
        while(s.length()!=0){
            result = pow(26,count)*((int)s.back()-64) + result;
            count++;
            s.pop_back();
        }
        return result;
    }
};