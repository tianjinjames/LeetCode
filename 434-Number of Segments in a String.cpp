/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Number of Segments in a String.
			  Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.
			  Please note that the string does not contain any non-printable characters.
Example		: Input: "Hello, my name is John"
			  Output: 5
Source      : https://leetcode.com/problems/number-of-segments-in-a-string/
*******************************************/

class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        bool ignore = false;
        for(int i = 0; i < s.size(); i++){
            ignore = false;
            while(i < s.size() && s[i] != 32){
                if(!ignore){
                    count++;
                    ignore = true;
                }
                else
                    i++;
            }
        }
        return count;
    }
};