/*
Intuition
Since multiple transactions are allowed, we don’t need to find one global buy-sell pair.
Any time the price increases from one day to the next, we can take profit.
By adding up all such increases, we effectively simulate buying before each rise and selling at its peak.

Approach
Traverse the price array from day 1.

Whenever today’s price is higher than yesterday’s price:

Add the difference to maxprofit.

This greedy approach captures every profitable upward movement.

Return the accumulated profit.

This avoids tracking explicit buy/sell days and prevents double counting.

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
        for(int i =1; i<n; i++){
            if(buy<prices[i]){
                if(prices[i]>prices[i-1]){
                    profit = prices[i]-buy;
                    maxprofit+=profit;
                    buy = prices[i];
                }
                
            }
            else{
                buy = prices[i];
            }
        }
        return maxprofit;
        
    }
};
