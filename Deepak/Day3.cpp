long long maximumProfit(vector<long long> &prices, int n)
{
	long long ans = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (prices[i] < prices[i + 1])
		{
			ans += (prices[i + 1] - prices[i]);
		}
	}
	return ans;
}

// TC: O(N)
// SC: O(1)