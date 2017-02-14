/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Reverse Integer.
			  Reverse digits of an integer.
Example	1	: x = 123, return 321.
Example 2	: x = -123, return -321.
Source      : https://leetcode.com/problems/reverse-integer/
*******************************************/

class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        while(x != 0){
            result = x%10 + result*10;
            x = x/10;
        }
        return (result<INT_MIN || result>INT_MAX) ? 0 : result;
    }
};