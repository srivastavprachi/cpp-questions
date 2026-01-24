/*
Intuition
To maximize profit, we need to buy at the lowest price and sell at a higher price that comes after it.
While scanning the prices, if we keep track of the minimum buying price so far, we can compute the profit at every step and update the maximum profit.

Approach
Initialize buy as the first day’s price (minimum price so far).

Traverse the price array once:

If the current price is higher than buy, calculate profit and update maxprofit.

If the current price is lower than buy, update buy (better buying opportunity).

Continue until the end of the array.

Return maxprofit.

This ensures we always buy before selling and find the best possible transaction.

Complexity
Time complexity: O(n)
Space complexity: O(1)
  */


//Code


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int buy = prices[0];
        int profit = 0;
        int maxprofit = 0;
        int start = 0;
        while(start < n){
            if(prices[start]>buy){
                profit = prices[start] - buy;
                maxprofit = max(maxprofit, profit);
            }
            else{
                buy = prices[start];
            }
            start++;
        }
        return maxprofit;

    }
};
