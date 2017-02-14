/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Length of Last Word.
			  Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
			  If the last word does not exist, return 0.
Example		: Given s = "Hello World", return 5.
Source      : https://leetcode.com/problems/length-of-last-word/
*******************************************/

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() == 0) return 0;
        int end = s.length() - 1, res = 0;
        while(s[end] == ' '){
            end--;
        }
        
        while(end >= 0 && s[end] != ' '){
            end--;
            res++;
        }
        
        return res;
    }
};