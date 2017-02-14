/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Add Strings.
			  Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.
Note		: The length of both num1 and num2 is < 5100.
			  Both num1 and num2 contains only digits 0-9.
	  	 	  Both num1 and num2 does not contain any leading zero.
			  You must not use any built-in BigInteger library or convert the inputs to integer directly.
Source      : https://leetcode.com/problems/add-strings/
*******************************************/

class Solution {
public:
    string addStrings(string a, string b) {
        string result;
        int c, carry = 0;
        while(true){
            int c = carry;
            if (b.length() == 0 && a.length()==0 && c ==0)
                break;
            if(a.length()!=0){
                c += a.back()-'0';
                a.pop_back(); 
            }
            if (b.length()!=0){
                c += b.back()-'0';
                b.pop_back();
            }
                
            if(c >= 10){
                result.insert(result.begin(), c%10 + '0');
                carry = 1;
            }
            else{
                result.insert(result.begin(), c + '0');
                carry = 0;
            }
        }
        return result;
    }
};