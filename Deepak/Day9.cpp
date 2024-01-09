int solve(int n, vector<vector<int>> &triangle, vector<vector<int>> &dp, int i, int j)
{
	if (i >= n)
	{
		return 0;
	}
	if (j >= triangle[i].size())
	{
		return 0;
	}
	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}
	dp[i][j] = triangle[i][j] + min(solve(n, triangle, dp, i + 1, j), solve(n, triangle, dp, i + 1, j + 1));
}
int minimizeSum(int n, vector<vector<int>> &triangle)
{
	vector<vector<int>> dp(n, vector<int>(n, -1));
	return solve(n, triangle, dp, 0, 0);
}