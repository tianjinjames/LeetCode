/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Add Digits. Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
Example		: Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
Source      : https://leetcode.com/problems/add-digits/
*******************************************/

class Solution {
public:
    int addDigits(int num) {
        while (num >= 10){
            num = num%10+num/10;
        }
        return num;
    }
};