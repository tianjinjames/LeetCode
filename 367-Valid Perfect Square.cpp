/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Valid Perfect Square.
			  Given a positive integer num, write a function which returns True if num is a perfect square else False.
Source      : https://leetcode.com/problems/valid-perfect-square/
*******************************************/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1)   return true;
        int start = 1, end = num;
        while(start <= end){
            int mid = start + (end-start)/2;
            if (double(num)/double(mid) > mid)  start = mid+1;
            else if (double(num)/double(mid) < mid) end = mid-1;
            else if (double(num)/double(mid) == mid)   return true;
        }
        return false;
    }
};