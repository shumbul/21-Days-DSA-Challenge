int nthFibonacci(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	const int M = 1e9 + 7;
	int f = 0;
	int s = 1;
	int ans;
	for (int i = 2; i <= n; i++)
	{
		ans = (f + s) % M;
		f = s;
		s = ans;
	}
	return s;
}

// TC: O(N)
// SC: O(1)