/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Sqrt(x).
			  Implement int sqrt(int x). Compute and return the square root of x.
Source      : https://leetcode.com/problems/sqrtx/
*******************************************/

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
        return x;
        int left = 1, right = x;
        while (true) {
            int mid = left + (right - left)/2;
            if (mid > x/mid) {
                right = mid - 1;
            } else {
                if (mid + 1 > x/(mid + 1))
                    return mid;
                left = mid + 1;
            }
        }
    }
};