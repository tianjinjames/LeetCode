/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Add Strings.
			  Say you have an array for which the ith element is the price of a given stock on day i.
			  If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), 
			  design an algorithm to find the maximum profit.
Example 1	: Input: [7, 1, 5, 3, 6, 4]
			  Output: 5
		      max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)
Example 2	: Input: [7, 6, 4, 3, 1]
			  Output: 0
			  In this case, no transaction is done, i.e. max profit = 0.
Source      : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*******************************************/

class Solution {
public:
    int maxProfit(vector<int>& input) {
        if (input.size() <= 1)
            return 0;
        int buy = input[0], profit = 0;
        for (int i = 0; i < input.size(); i++){
            buy = min (buy, input[i]);
            if (input[i] - buy > profit)
                profit = input[i] - buy;
        }
        return profit;
    }
};