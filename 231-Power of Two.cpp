/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Power of Two.
			  Given an integer, write a function to determine if it is a power of two.
Source      : https://leetcode.com/problems/power-of-two
*******************************************/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        double t = n;
        if(t == 0)  return false;
        while(n!=0){
            if(t == 0 || t == 1)    return true;
            if((t < 1 && t != 0) || ((long)(t*10)) % 10 != 0) return false;
            t = t/2;
        }
        return true;
    }
};