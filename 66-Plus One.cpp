/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Plus One.
			  Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
			  You may assume the integer do not contain any leading zero, except the number 0 itself.
			  The digits are stored such that the most significant digit is at the head of the list.
Source      : https://leetcode.com/problems/plus-one/
*******************************************/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--){
            digits[i] = digits[i] + carry;
            carry = 0;
            if (digits[i] > 9){
                digits[i] = digits[i] % 10;
                carry = 1;
            }
        }
        if (carry == 1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};