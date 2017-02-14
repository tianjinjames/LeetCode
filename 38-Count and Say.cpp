/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Count and Say.
			  The count-and-say sequence is the sequence of integers beginning as follows:
			  1, 11, 21, 1211, 111221, ...

			  1 is read off as "one 1" or 11.
		      11 is read off as "two 1s" or 21.
			  21 is read off as "one 2, then one 1" or 1211.
			  Given an integer n, generate the nth sequence.
 			  Note: The sequence of integers will be represented as a string.
			  
Source      : https://leetcode.com/problems/count-and-say/
*******************************************/

class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        if (n<=1)   return res;
        while(n != 1){
            int count = 1;
            string temp;
            for(int i = 0; i < res.size(); i++){
                if (i != res.size()-1 && res[i] == res[i+1]) count++;
                else {
                    temp = temp + to_string(count) + res[i];
                    count = 1;
                }
            }
            res = temp;
            n--;
        }
        return res;
    }
};