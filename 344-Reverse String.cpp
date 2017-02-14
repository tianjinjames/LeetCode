/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 10:49
Description : Reverse String. Write a function that takes a string as input and returns the string reversed.
Example		: Given s = "hello", return "olleh".
Source      : https://leetcode.com/problems/reverse-string/
*******************************************/

class Solution {
public:
    string reverseString(string s) {
        if (s.length() <= 1)     return s;
        int start = 0, end = s.length()-1;
        
        while(start < end){
            swap(s.at(start), s.at(end));
            start++;
            end--;
        }
        
        return s;
    }
};