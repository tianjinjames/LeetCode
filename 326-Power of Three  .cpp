/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Power of Three.
			  Given an integer, write a function to determine if it is a power of three.
Source      : https://leetcode.com/problems/power-of-three
*******************************************/

// 1162261467 is 3^19,  3^20 is bigger than int
class Solution {
public:
    bool isPowerOfThree(int n) {
        return ( n>0 &&  1162261467%n==0);
    }
};