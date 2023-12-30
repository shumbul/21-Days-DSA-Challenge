// Problem link - https://bit.ly/48vV3FO 

class Solution {
    int dp[201][201];
    int helper(int i, int j, vector<vector<int>>& triangle, int& n) {
        if(i<0 || j<0 || i>=n || j>=n) return INT_MAX;
        if(i==n-1) return triangle[i][j];
        if(dp[i][j] !=-1) return dp[i][j];
        return dp[i][j]=min(helper(i+1, j, triangle, n), helper(i+1, j+1, triangle, n)) + triangle[i][j];
    }
  public:
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
        // memoization
        memset(dp, -1, sizeof dp);
        return helper(0, 0, triangle, n);
    }
};

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
