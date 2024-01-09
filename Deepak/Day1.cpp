int getPairsCount(int arr[], int n, int k)
{
	int ans = 0;
	unordered_map<int, int> freq;
	for (int idx = 0; idx < n; idx++)
	{
		ans += freq[k - arr[idx]];
		freq[arr[idx]]++;
	}
	return ans;
}