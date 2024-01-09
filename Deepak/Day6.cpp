int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{
	int i = 0;
	int j = M - 1;
	while (i < N && j >= 0)
	{
		if (mat[i][j] == X)
		{
			return 1;
		}
		if (mat[i][j] < X)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	return 0;
}