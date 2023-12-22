// https://bit.ly/48uaNZM

class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
        long long ans=0;
        for(long long i=1;i<n;i++){
            if(profit[i]-profit[i-1]>0)
                ans=ans+profit[i]-profit[i-1];
        }
        return ans;
    }
};

/*
    Time complexity: O(n)
    Space complexity: O(1)
*/

/*
    Example:
        7 1 4 6 5 3
        Best: 1 -> 6 = 5
        Approach: if profit[i]-profit[i-1]>0, add this profit to ans
        
        ans=0 initially
        4-1=3>0 -> ans = 0+3 = 3
        6-4=2>0 -> ans = 3+2 = 5
        
        Day wise behind the scene:
        -1 + 4 - 4 + 6 = 5
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
