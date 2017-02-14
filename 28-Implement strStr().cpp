/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Implement strStr().
			  Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Source      : https://leetcode.com/problems/implement-strstr/
*******************************************/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0)   return 0;
        if(needle.length() > haystack.length()) return -1;
        auto found = haystack.find(needle);
        if (found!=std::string::npos)
            return found;
        return -1;
    }
};