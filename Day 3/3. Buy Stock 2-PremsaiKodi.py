class Solution:
    def maximumProfit(self, prices, n):
        #Code here
        profit = 0
        for i in range(1,len(prices)):
            if prices[i]>prices[i-1]:
                profit+=prices[i]-prices[i-1]
        return profit


# Time Complexity : O(n)
# Space Complexity : O(1)
