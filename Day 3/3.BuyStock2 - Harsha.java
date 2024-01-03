class Solution{
    public long maximumProfit(long prices[], int N){
       int profit = 0;
       for (int currDay = 1; currDay < N; currDay++) {
           int currDayPrice = (int)prices[currDay];
           int prevDayPrice = (int)prices[currDay - 1];
           if (currDayPrice > prevDayPrice) {
               profit += currDayPrice - prevDayPrice;
           }
       }
       return profit;
    }
}

/**
  * Time complexity : O(N) for iterating array of prices
  * Space complexity : O(1)
*/
