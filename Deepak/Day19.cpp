int findLongestConseqSubseq(int arr[], int N)
{
	unordered_set<int> s;
	for (int i = 0; i < N; i++)
	{
		s.insert(arr[i]);
	}
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		if (s.find(arr[i] - 1) == s.end())
		{
			int temp = arr[i];
			int cnt = 0;
			while (s.find(temp) != s.end())
			{
				cnt++;
				temp++;
			}
			ans = max(ans, cnt);
		}
	}
	return ans;
}