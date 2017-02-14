/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Valid Palindrome.
			  Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Example		: "A man, a plan, a canal: Panama" is a palindrome.
			  "race a car" is not a palindrome.
Source      : https://leetcode.com/problems/valid-palindrome/
*******************************************/

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0)  return true;
        int start = 0, end = s.length()-1;
        while(start < end){
            while(!isalnum(s[start]))   start++;
            while(!isalnum(s[end]))     end--;
            if(start < end && tolower(s[start]) != tolower(s[end]))      
				return false;
            start++;
            end--;
        }
        return true;
    }
};