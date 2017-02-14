/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Add Binary.
			  Given two binary strings, return their sum (also a binary string).
Example		: a = "11", b = "1". Return "100".
Source      : https://leetcode.com/problems/add-binary/
*******************************************/

/*
	There are several cases to take into consideration:
		0 + 0 -> 0
		0 + 1 -> 1
		1 + 1 -> 0 (carry 1)
		1 + 1 + 1(from carray) -> 1 (carry 1)
*/

class Solution {
public:
/*
adding a+b may cause overflow
*/
    string addBinary(string a, string b) {
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
                
            if(c == 2){
                result.insert(result.begin(),'0');
                carry = 1;
            }
            else if(c == 3){
                result.insert(result.begin(),'1');
                carry = 1;
            }
            else{
                result.insert(result.begin(),c+'0');
                carry = 0;
            }
        }
        return result;
    }
};