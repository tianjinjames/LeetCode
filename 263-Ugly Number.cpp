/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Ugly Number.
			  Write a program to check whether a given number is an ugly number.
			  Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 
			  For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
			  Note that 1 is typically treated as an ugly number.
Source      : https://leetcode.com/problems/ugly-number/
*******************************************/

class Solution {
public:
    bool isUgly(int num) {
        if(num == 0)    return false;
        while(num != 1){
            if(double(num%2) == 0) num = num/2;
            else if(double(num%3) == 0) num = num/3;
            else if(double(num%5) == 0) num = num/5;
            else return false;
        }
        return true;
    }
};