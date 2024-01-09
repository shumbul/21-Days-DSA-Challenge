long long maxArea(long long A[], int len)
{
	long long ans = 0;
	int i = 0;
	int j = len - 1;
	while (i < j)
	{
		long long h = min(A[i], A[j]);
		long long w = j - i;
		ans = max(ans, h * w);
		if (A[i] == h)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	return ans;
}