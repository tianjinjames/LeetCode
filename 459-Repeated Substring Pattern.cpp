/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Repeated Substring Pattern.
			  Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. 
			  You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.
Example 1	: Input: "abab"
			  Output: True
			  Explanation: It's the substring "ab" twice.
Example 2	: Input: "aba"
			  Output: False
Example 3	: Input: "abcabcabcabc"
			  Output: True
			  Explanation: It's the substring "abc" four times. (And the substring "abcabc" twice.)
Source      : https://leetcode.com/problems/repeated-substring-pattern/
*******************************************/

class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        if(str.length()<=1)     return false;
        int start = 0, end = str.length()-1;
        while(start <= str.length()/2){
            if(str[start] != str[end]){
                start++;
            }
            else{
                string fronttemp = str.substr(0, start+1);
                string backtemp = str.substr(str.length()-1-start, fronttemp.length());
                if(fronttemp == backtemp){
                    int rep = str.length()/fronttemp.length();
                    int temp = rep;
                    string newstring = fronttemp;
                    while(rep != 1){
                        newstring += fronttemp;
                        rep--;
                    }
                    if(newstring == str && temp!=1)    return true;
                }
                start++;
            }
        }
        return false;
    }
};