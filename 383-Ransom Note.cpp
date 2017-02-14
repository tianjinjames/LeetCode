/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Ransom Note.
			  Given an arbitrary ransom note string and another string containing letters from all the magazines, 
			  write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.
			  Each letter in the magazine string can only be used once in your ransom note.
Example		: canConstruct("a", "b") -> false
			  canConstruct("aa", "ab") -> false
			  canConstruct("aa", "aab") -> true
Source      : https://leetcode.com/problems/ransom-note/
*******************************************/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> noteTable;
        for (char c : ransomNote)
            --noteTable[c];
        for (char t : magazine)
            ++noteTable[t];
        for (const auto& p : noteTable){
            if (p.second < 0)
                return false;
        }
        return true;
    }
};