/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Longest Common Prefix.
			  Write a function to find the longest common prefix string amongst an array of strings.
Source      : https://leetcode.com/problems/longest-common-prefix/
*******************************************/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if(strs.size() == 0 || strs[0].length() == 0)   return res;
        
        for(int i = 0; i < strs[0].length(); i++){
            char ele = strs[0][i];
            for (auto p : strs){
                if(i >= p.length() || p[i] != ele)
                    return res;
            }
            res = res+ele;
        }
        return res;
    }
};