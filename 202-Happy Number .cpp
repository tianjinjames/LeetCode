/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Happy Number.
			  Write an algorithm to determine if a number is "happy".
			  A happy number is a number defined by the following process: Starting with any positive integer, 
			  replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), 
			  or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
Example		: 19 is a happy number.
Source      : https://leetcode.com/problems/happy-number/
*******************************************/

class Solution {
public:
    bool isHappy(int n) {
        long num = n;
        // create a set that record all visited numbers
        set<long> visited;
        // terminate when n is 1 (happy number) or n has been previously visitted
        while (num!=1){
            if (visited.find(num) != visited.end())   return false;
            visited.insert(num);
            long temp = 0;
            while(num != 0){
                temp += (num%10)*(num%10);
                num = num/10;
            }
            num = temp;
        }
        return true;
    }
};