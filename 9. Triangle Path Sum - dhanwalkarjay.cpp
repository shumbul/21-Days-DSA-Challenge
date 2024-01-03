// Problem link - https://bit.ly/48vV3FO 

class Solution {
  public:
    int solve(int n, vector<vector<int>>& triangle, int row, int col, vector<vector<int> >& dp){
        if(row == n - 1)
            return triangle[row][col];
            
        if(dp[row][col] != -1)
            return dp[row][col];
        
        int leftSum = solve(n, triangle, row+1, col, dp);
        int rightSum = solve(n, triangle, row+1, col+1, dp);
        
        int ans = triangle[row][col] + min(leftSum, rightSum); 
        
        return dp[row][col] = ans;
    }
    
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        vector<vector<int> > dp(n, vector<int> (n, -1));
        return solve(n, triangle, 0, 0, dp);
    }
};

/* Easy to understand code 
    TC : O(n^2)
    SC : O(n^2)

    we can optimize this code in 
    TC : O(n^2)
    SC : O(n)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
